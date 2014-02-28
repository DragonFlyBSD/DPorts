--- src/konfigurator/savehelper.cpp.orig	2014-01-27 06:37:35.000000000 +0000
+++ src/konfigurator/savehelper.cpp
@@ -29,8 +29,8 @@
 
 ActionReply SaveHelper::save(QVariantMap args)
 {
-    __uid_t uid = getuid();
-    kDebug() << "executing uid=" << uid;
+//    __uid_t uid = getuid();
+//    kDebug() << "executing uid=" << uid;
 
     return ActionReply::SuccessReply;
 }
