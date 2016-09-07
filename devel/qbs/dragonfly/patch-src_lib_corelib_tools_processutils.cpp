--- src/lib/corelib/tools/processutils.cpp.intermediate	2016-09-07 13:15:16 UTC
+++ src/lib/corelib/tools/processutils.cpp
@@ -106,6 +106,10 @@ QString processNameByPid(qint64 pid)
     if (kp.p_pid != pid)
         return QString();
     QString name = QFile::decodeName(kp.p_comm);
+# elif defined(__DragonFly__)
+    if (kp.kp_pid != pid)
+        return QString();
+    QString name = QFile::decodeName(kp.kp_comm);
 # else
     if (kp.ki_pid != pid)
         return QString();
