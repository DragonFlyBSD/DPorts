--- cegui/src/System.cpp.orig	2014-07-07 10:06:18.000000000 +0300
+++ cegui/src/System.cpp
@@ -356,6 +356,8 @@ const String& System::getVerboseVersion(
 
 #if defined(__linux__)
         ret += " GNU/Linux";
+#elif defined(__DragonFly__)
+        ret += " DragonFly";
 #elif defined (__FreeBSD__)
         ret += " FreeBSD";
 #elif defined (__APPLE__)
