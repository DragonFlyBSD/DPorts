--- src/lib/corelib/tools/processutils.cpp.orig
+++ src/lib/corelib/tools/processutils.cpp
@@ -120,6 +120,10 @@
     if (kp.p_pid != pid)
         return {};
     QString name = QFile::decodeName(kp.p_comm);
+# elif defined(Q_OS_DRAGONFLY)
+    if (kp.kp_pid != pid)
+        return {};
+    QString name = QFile::decodeName(kp.kp_comm);
 # else
     if (kp.ki_pid != pid)
         return {};
