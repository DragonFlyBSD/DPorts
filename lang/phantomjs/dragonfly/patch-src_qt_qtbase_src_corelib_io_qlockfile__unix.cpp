--- src/qt/qtbase/src/corelib/io/qlockfile_unix.cpp~	2015-12-12 13:58:05.000000000 +0100
+++ src/qt/qtbase/src/corelib/io/qlockfile_unix.cpp	2019-01-14 02:37:25.102364000 +0100
@@ -56,13 +56,9 @@
 #   include <cstdio>
 #elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS)
 #   include <sys/user.h>
-# if defined(__GLIBC__) && defined(__FreeBSD_kernel__)
 #   include <sys/cdefs.h>
 #   include <sys/param.h>
 #   include <sys/sysctl.h>
-# else
-#   include <libutil.h>
-# endif
 #endif
 
 QT_BEGIN_NAMESPACE
@@ -240,28 +236,22 @@ QString QLockFilePrivate::processNameByP
     buf[len] = 0;
     return QFileInfo(QFile::decodeName(buf)).fileName();
 #elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS)
-# if defined(__GLIBC__) && defined(__FreeBSD_kernel__)
     int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, pid };
     size_t len = 0;
     if (sysctl(mib, 4, NULL, &len, NULL, 0) < 0)
         return QString();
     kinfo_proc *proc = static_cast<kinfo_proc *>(malloc(len));
-# else
-    kinfo_proc *proc = kinfo_getproc(pid);
-# endif
     if (!proc)
         return QString();
-# if defined(__GLIBC__) && defined(__FreeBSD_kernel__)
     if (sysctl(mib, 4, proc, &len, NULL, 0) < 0) {
         free(proc);
         return QString();
     }
-    if (proc->ki_pid != pid) {
+    if (proc->kp_pid != pid) {
         free(proc);
         return QString();
     }
-# endif
-    QString name = QFile::decodeName(proc->ki_comm);
+    QString name = QFile::decodeName(proc->kp_comm);
     free(proc);
     return name;
 #else
