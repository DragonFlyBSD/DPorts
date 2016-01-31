--- src/corelib/io/qlockfile_unix.cpp.orig	2015-10-13 04:35:31 UTC
+++ src/corelib/io/qlockfile_unix.cpp
@@ -239,7 +239,7 @@ QString QLockFilePrivate::processNameByP
     }
     buf[len] = 0;
     return QFileInfo(QFile::decodeName(buf)).fileName();
-#elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS)
+#elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS) && 0
 # if defined(__GLIBC__) && defined(__FreeBSD_kernel__)
     int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, pid };
     size_t len = 0;
