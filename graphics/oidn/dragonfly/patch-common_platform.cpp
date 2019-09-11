--- common/platform.cpp.orig	2019-07-19 12:56:20 UTC
+++ common/platform.cpp
@@ -52,6 +52,8 @@ namespace oidn {
 
   #if defined(__linux__)
     name = "Linux";
+  #elif defined(__DragonFly__)
+    name = "DragonFly";
   #elif defined(__FreeBSD__)
     name = "FreeBSD";
   #elif defined(__CYGWIN__)
