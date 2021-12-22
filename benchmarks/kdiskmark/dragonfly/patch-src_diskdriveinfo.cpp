Stub

--- src/diskdriveinfo.cpp.orig	2021-07-22 07:30:14 UTC
+++ src/diskdriveinfo.cpp
@@ -43,6 +43,8 @@ QString DiskDriveInfo::getModelName(cons
     QString model(arg.value.str);
 
     close(fd);
+#elif defined(__DragonFly__)
+    QString model = QString("unknown_model");
 #endif
 
     return model;
