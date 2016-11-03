--- src/corelib/io/qlockfile_unix.cpp.orig	2016-09-16 05:49:42 UTC
+++ src/corelib/io/qlockfile_unix.cpp
@@ -266,7 +266,7 @@ QString QLockFilePrivate::processNameByP
     }
     buf[len] = 0;
     return QFileInfo(QFile::decodeName(buf)).fileName();
-#elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS)
+#elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS) && 0
 # if defined(Q_OS_NETBSD)
     struct kinfo_proc2 kp;
     int mib[6] = { CTL_KERN, KERN_PROC2, KERN_PROC_PID, (int)pid, sizeof(struct kinfo_proc2), 1 };
