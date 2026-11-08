--- src/core/io/qlockfile_unix.cpp.orig
+++ src/core/io/qlockfile_unix.cpp
@@ -345,6 +345,12 @@
    }
 
    QString name = QFile::decodeName(kp.p_comm);
+# elif defined(Q_OS_DRAGONFLY)
+   if (kp.kp_pid != pid) {
+      return QString();
+   }
+
+   QString name = QFile::decodeName(kp.kp_comm);
 # else
    if (kp.ki_pid != pid) {
       return QString();
