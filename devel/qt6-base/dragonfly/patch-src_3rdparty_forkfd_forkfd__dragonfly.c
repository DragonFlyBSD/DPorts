--- src/3rdparty/forkfd/forkfd_dragonfly.c.orig
+++ src/3rdparty/forkfd/forkfd_dragonfly.c
@@ -0,0 +1,134 @@
+/* DragonFly: watch the child's exit with a kqueue (EVFILT_PROC) instead of a
+ * process-wide SIGCHLD handler, which GLib's child watches replace. */
+
+#include "forkfd.h"
+
+#include <sys/types.h>
+#include <sys/event.h>
+#include <sys/time.h>
+#include <sys/wait.h>
+#include <signal.h>
+
+#include "forkfd_atomic.h"
+
+#undef SYSTEM_FORKFD_CAN_VFORK
+
+// in forkfd.c
+static void convertStatusToForkfdInfo(int status, struct forkfd_info *info);
+
+int system_has_forkfd()
+{
+    return 1;
+}
+
+int system_forkfd(int flags, pid_t *ppid, int *system)
+{
+    struct kevent kev;
+    int kq, sync[2], ret, saved_errno;
+    pid_t pid;
+    char c;
+
+    *system = 0;
+    kq = kqueue();
+    if (kq == -1)
+        return -1;
+    if (pipe2(sync, O_CLOEXEC) == -1) {
+        close(kq);
+        return -1;
+    }
+    *system = 1;
+
+    pid = fork();
+    if (__builtin_expect(pid == -1, 0)) {
+        saved_errno = errno;
+        close(sync[0]);
+        close(sync[1]);
+        close(kq);
+        errno = saved_errno;
+        return -1;
+    }
+
+    if (pid == 0) {
+        /* child process: wait until the parent watches us, so that an
+         * early exit cannot go unnoticed */
+        close(sync[1]);
+        while (read(sync[0], &c, 1) == -1 && errno == EINTR)
+            ;
+        close(sync[0]);
+        return FFD_CHILD_PROCESS;
+    }
+
+    /* parent process */
+    close(sync[0]);
+    EV_SET(&kev, pid, EVFILT_PROC, EV_ADD, NOTE_EXIT, 0, NULL);
+    ret = kevent(kq, &kev, 1, NULL, 0, NULL);
+    saved_errno = errno;
+    close(sync[1]);
+    if (__builtin_expect(ret == -1, 0)) {
+        int status;
+        kill(pid, SIGKILL);
+        while (waitpid(pid, &status, 0) == -1 && errno == EINTR)
+            ;
+        close(kq);
+        errno = saved_errno;
+        return -1;
+    }
+
+    if (flags & FFD_CLOEXEC)
+        fcntl(kq, F_SETFD, FD_CLOEXEC);
+    if (flags & FFD_NONBLOCK)
+        fcntl(kq, F_SETFL, fcntl(kq, F_GETFL) | O_NONBLOCK);
+    if (ppid)
+        *ppid = pid;
+    return kq;
+}
+
+int system_forkfd_wait(int ffd, struct forkfd_info *info, int ffdoptions, struct rusage *rusage)
+{
+    static const struct timespec zero = { 0, 0 };
+    struct kevent ev;
+    pid_t pid;
+    int status;
+    int options = (ffdoptions & FFDW_NOHANG) ? WNOHANG : 0;
+    int ret;
+
+    if ((options & WNOHANG) == 0) {
+        /* check if the file descriptor is non-blocking */
+        ret = fcntl(ffd, F_GETFL);
+        if (ret == -1)
+            return ret;
+        options |= (ret & O_NONBLOCK) ? WNOHANG : 0;
+    }
+
+    /* the exit event names the child */
+    ret = kevent(ffd, NULL, 0, &ev, 1, (options & WNOHANG) ? &zero : NULL);
+    if (ret == -1)
+        return ret;
+    if (ret == 0) {
+        errno = EWOULDBLOCK;
+        return -1;
+    }
+    pid = (pid_t)ev.ident;
+
+    if (ffdoptions & FFDW_NOWAIT) {
+        /* peek, and re-arm the descriptor so that a later wait finds the child */
+        siginfo_t si;
+        ret = waitid(P_PID, pid, &si, WEXITED | WNOWAIT);
+        EV_SET(&ev, pid, EVFILT_USER, EV_ADD | EV_ONESHOT, NOTE_TRIGGER, 0, NULL);
+        kevent(ffd, &ev, 1, NULL, 0, NULL);
+        if (ret == -1)
+            return -1;
+        if (info) {
+            info->code = si.si_code;
+            info->status = si.si_status;
+        }
+        if (rusage)
+            memset(rusage, 0, sizeof(*rusage));
+        return 0;
+    }
+
+    ret = wait4(pid, &status, options & ~WNOHANG, rusage);
+    if (ret != -1 && info)
+        convertStatusToForkfdInfo(status, info);
+    return ret == -1 ? -1 : 0;
+}
