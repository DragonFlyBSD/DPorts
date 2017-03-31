--- src/corelib/io/qlockfile_unix.cpp.orig	2016-12-01 08:17:04 UTC
+++ src/corelib/io/qlockfile_unix.cpp
@@ -283,7 +283,7 @@ QString QLockFilePrivate::processNameByP
     if (get_thread_info(pid, &info) != B_OK)
         return QString();
     return QFile::decodeName(info.name);
-#elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS)
+#elif defined(Q_OS_BSD4) && !defined(Q_OS_IOS) && 0
 # if defined(Q_OS_NETBSD)
     struct kinfo_proc2 kp;
     int mib[6] = { CTL_KERN, KERN_PROC2, KERN_PROC_PID, (int)pid, sizeof(struct kinfo_proc2), 1 };
