--- src/corelib/io/qlockfile_unix.cpp.orig	2022-11-05 22:53:01.599820000 +0100
+++ src/corelib/io/qlockfile_unix.cpp	2022-11-05 22:53:41.808928000 +0100
@@ -273,9 +273,9 @@
         return QString();
     QString name = QFile::decodeName(kp.p_comm);
 # else
-    if (kp.ki_pid != pid)
+    if (kp.kp_pid != pid)
         return QString();
-    QString name = QFile::decodeName(kp.ki_comm);
+    QString name = QFile::decodeName(kp.kp_comm);
 # endif
     return name;
 #elif defined(Q_OS_QNX)
