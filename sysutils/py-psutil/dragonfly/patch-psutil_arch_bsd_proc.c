--- psutil/arch/bsd/proc.c.intermediate	2026-09-16 04:10:44 UTC
+++ psutil/arch/bsd/proc.c
@@ -6,19 +6,34 @@
 
 #include <Python.h>
 #include <kvm.h>
+#ifndef PSUTIL_DRAGONFLY
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #include <sys/file.h>
 #include <sys/vnode.h>
-#ifdef PSUTIL_FREEBSD
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
 #include <sys/user.h>
 #include <libutil.h>
 #endif
+#if defined(PSUTIL_DRAGONFLY)
+#include <sys/param.h>
+#include <sys/stat.h>
+#include <dirent.h>
+#include <fcntl.h>
+#endif
 
 #include "../../arch/all/init.h"
+#ifdef PSUTIL_DRAGONFLY
+#include "../../arch/dragonfly/proc.h"
 
+// psutil_proc_num_fds() is implemented below for DragonFly (per-pid
+// counting via /proc); the shared arch/bsd/init.h does not declare it.
+PyObject *psutil_proc_num_fds(PyObject *self, PyObject *args);
+#endif
 
+
 /*
  * Collect different info about a process in one shot and return
  * them as a big Python tuple.
@@ -51,6 +66,8 @@ psutil_proc_oneshot_info(PyObject *self, PyObject *arg
         // Process
 #ifdef PSUTIL_FREEBSD
     str_format(name_buf, sizeof(name_buf), "%s", kp.ki_comm);
+#elif defined(PSUTIL_DRAGONFLY)
+    str_format(name_buf, sizeof(name_buf), "%s", kp.kp_comm);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     str_format(name_buf, sizeof(name_buf), "%s", kp.p_comm);
 #endif
@@ -69,6 +86,12 @@ psutil_proc_oneshot_info(PyObject *self, PyObject *arg
     memtext = (long)kp.ki_tsize * pagesize;
     memdata = (long)kp.ki_dsize * pagesize;
     memstack = (long)kp.ki_ssize * pagesize;
+#elif defined(PSUTIL_DRAGONFLY)
+    rss = (long)kp.kp_vm_rssize * pagesize;
+    vms = (long)kp.kp_vm_map_size;
+    memtext = (long)kp.kp_vm_tsize * pagesize;
+    memdata = (long)kp.kp_vm_dsize * pagesize;
+    memstack = (long)kp.kp_vm_ssize * pagesize;
 #else
     rss = (long)kp.p_vm_rssize * pagesize;
 #ifdef PSUTIL_OPENBSD
@@ -106,6 +129,8 @@ psutil_proc_oneshot_info(PyObject *self, PyObject *arg
 
 #ifdef PSUTIL_FREEBSD
     py_ppid = PyLong_FromPid(kp.ki_ppid);
+#elif defined(PSUTIL_DRAGONFLY)
+    py_ppid = PyLong_FromPid(kp.kp_ppid);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     py_ppid = PyLong_FromPid(kp.p_ppid);
 #else
@@ -154,6 +179,39 @@ psutil_proc_oneshot_info(PyObject *self, PyObject *arg
         memstack,  // (long) mem stack
         // others
         oncpu,  // (int) the CPU we are on
+#elif defined(PSUTIL_DRAGONFLY)
+        py_ppid,  // (pid_t) ppid
+        (int)kp.kp_stat,  // (int) status
+        // UIDs
+        (long)kp.kp_ruid,  // (long) real uid
+        (long)kp.kp_uid,  // (long) effective uid
+        (long)kp.kp_svuid,  // (long) saved uid
+        // GIDs
+        (long)kp.kp_rgid,  // (long) real gid
+        (long)kp.kp_groups[0],  // (long) effective gid
+        (long)kp.kp_svuid,  // (long) saved gid
+        //
+        kp.kp_tdev,  // (int or long long) tty nr
+        PSUTIL_TV2DOUBLE(kp.kp_start),  // (double) create time
+        // ctx switches
+        kp.kp_ru.ru_nvcsw,  // (long) ctx switches (voluntary)
+        kp.kp_ru.ru_nivcsw,  // (long) ctx switches (unvoluntary)
+        // IO count
+        kp.kp_ru.ru_inblock,  // (long) read io count
+        kp.kp_ru.ru_oublock,  // (long) write io count
+        // CPU times: convert from micro seconds to seconds.
+        PSUTIL_TV2DOUBLE(kp.kp_ru.ru_utime),  // (double) user time
+        PSUTIL_TV2DOUBLE(kp.kp_ru.ru_stime),  // (double) sys time
+        PSUTIL_TV2DOUBLE(kp.kp_cru.ru_utime),  // (double) children utime
+        PSUTIL_TV2DOUBLE(kp.kp_cru.ru_stime),  // (double) children stime
+        // memory
+        rss,  // (long) rss
+        vms,  // (long) vms
+        memtext,  // (long) mem text
+        memdata,  // (long) mem data
+        memstack,  // (long) mem stack
+        // others
+        oncpu,  // (int) the CPU we are on
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
         py_ppid,  // (pid_t) ppid
         (int)kp.p_stat,  // (int) status
@@ -216,6 +274,8 @@ psutil_proc_name(PyObject *self, PyObject *args) {
 
 #ifdef PSUTIL_FREEBSD
     str_format(str, sizeof(str), "%s", kp.ki_comm);
+#elif defined(PSUTIL_DRAGONFLY)
+    str_format(str, sizeof(str), "%s", kp.kp_comm);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     str_format(str, sizeof(str), "%s", kp.p_comm);
 #endif
@@ -239,7 +299,7 @@ psutil_proc_environ(PyObject *self, PyObject *args) {
     if (!PyArg_ParseTuple(args, "l", &pid))
         return NULL;
 
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     kd = kvm_openfiles(NULL, "/dev/null", NULL, 0, errbuf);
 #else
     kd = kvm_openfiles(NULL, NULL, NULL, KVM_NO_FILES, errbuf);
@@ -255,6 +315,8 @@ psutil_proc_environ(PyObject *self, PyObject *args) {
 
 #if defined(PSUTIL_FREEBSD)
     p = kvm_getprocs(kd, KERN_PROC_PID, pid, &cnt);
+#elif defined(PSUTIL_DRAGONFLY)
+    p = kvm_getprocs(kd, KERN_PROC_PID, pid, &cnt);
 #elif defined(PSUTIL_OPENBSD)
     p = kvm_getprocs(kd, KERN_PROC_PID, pid, sizeof(*p), &cnt);
 #elif defined(PSUTIL_NETBSD)
@@ -279,6 +341,8 @@ psutil_proc_environ(PyObject *self, PyObject *args) {
     // To make unittest suite happy, return an empty environment.
 #if defined(PSUTIL_FREEBSD)
     if (!((p)->ki_flag & P_INMEM) || ((p)->ki_flag & P_SYSTEM)) {
+#elif defined(PSUTIL_DRAGONFLY)
+    if ((p)->kp_flags & P_SYSTEM) {
 #elif defined(PSUTIL_NETBSD)
     if ((p)->p_stat == SZOMB) {
 #elif defined(PSUTIL_OPENBSD)
@@ -365,7 +429,78 @@ error:
  */
 PyObject *
 psutil_proc_open_files(PyObject *self, PyObject *args) {
+#ifdef PSUTIL_DRAGONFLY
+    // DragonFly: libkinfo exposes only the system-wide
+    // kinfo_get_files(&files, &count), with no per-pid kinfo_getfile(pid)
+    // variant. Enumerate open regular files via /proc/<pid>/fd instead,
+    // mirroring the Linux backend. Unreadable entries are skipped.
     pid_t pid;
+    char procfd[64];
+    DIR *dirp = NULL;
+    struct dirent *dent;
+    struct stat sb;
+    char linkpath[PATH_MAX];
+    char fdpath[PATH_MAX + 32];
+    ssize_t len;
+    long fdnum;
+    char *endp;
+    PyObject *py_tuple = NULL;
+    PyObject *py_path = NULL;
+    PyObject *py_retlist = PyList_New(0);
+
+    if (py_retlist == NULL)
+        return NULL;
+    if (!PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+        goto error;
+    if (snprintf(procfd, sizeof(procfd), "/proc/%d/fd", (int)pid) >=
+        (int)sizeof(procfd)) {
+        psutil_oserror_ad("open_files: pid too large");
+        goto error;
+    }
+    dirp = opendir(procfd);
+    if (dirp == NULL)
+        goto error;
+    while ((dent = readdir(dirp)) != NULL) {
+        if (dent->d_name[0] == '.')
+            continue;
+        fdnum = strtol(dent->d_name, &endp, 10);
+        if (*endp != '\0')
+            continue;
+        if (snprintf(fdpath, sizeof(fdpath), "%s/%s", procfd,
+                     dent->d_name) >= (int)sizeof(fdpath))
+            continue;
+        if (stat(fdpath, &sb) == -1)
+            continue;  // fd vanished or unreadable; skip
+        if (!S_ISREG(sb.st_mode))
+            continue;  // psutil.open_files() reports regular files only
+        errno = 0;
+        len = readlink(fdpath, linkpath, sizeof(linkpath) - 1);
+        if (len == -1)
+            continue;
+        linkpath[len] = '\0';
+        py_path = PyUnicode_DecodeFSDefault(linkpath);
+        if (!py_path)
+            goto error;
+        py_tuple = Py_BuildValue("(Oi)", py_path, (int)fdnum);
+        if (py_tuple == NULL)
+            goto error;
+        if (PyList_Append(py_retlist, py_tuple))
+            goto error;
+        Py_CLEAR(py_path);
+        Py_CLEAR(py_tuple);
+    }
+    closedir(dirp);
+    return py_retlist;
+
+error:
+    Py_XDECREF(py_tuple);
+    Py_XDECREF(py_path);
+    Py_DECREF(py_retlist);
+    if (dirp != NULL)
+        closedir(dirp);
+    return NULL;
+#else
+    pid_t pid;
     int i;
     int cnt;
     int regular;
@@ -448,4 +583,41 @@ error:
     if (freep != NULL)
         free(freep);
     return NULL;
+#endif
 }
+
+
+#ifdef PSUTIL_DRAGONFLY
+/*
+ * Return the number of file descriptors opened by a process, by
+ * counting entries in /proc/<pid>/fd (libkinfo offers no per-pid
+ * file-descriptor query on DragonFly).
+ */
+PyObject *
+psutil_proc_num_fds(PyObject *self, PyObject *args) {
+    pid_t pid;
+    char procfd[64];
+    DIR *dirp = NULL;
+    struct dirent *dent;
+    int cnt = 0;
+
+    if (!PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+        return NULL;
+    if (snprintf(procfd, sizeof(procfd), "/proc/%d/fd", (int)pid) >=
+        (int)sizeof(procfd)) {
+        psutil_oserror_ad("num_fds: pid too large");
+        return NULL;
+    }
+    dirp = opendir(procfd);
+    if (dirp == NULL)
+        return psutil_oserror();
+    while ((dent = readdir(dirp)) != NULL) {
+        if (dent->d_name[0] == '.')
+            continue;
+        cnt++;
+    }
+    closedir(dirp);
+
+    return Py_BuildValue("i", cnt);
+}
+#endif
