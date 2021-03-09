--- hpp/constant.hpp.orig	2020-04-27 19:20:28 UTC
+++ hpp/constant.hpp
@@ -39,6 +39,8 @@
 #elif defined (__unix__)
     #if defined (__linux__)
         #define OsType "/Lnx"
+    #elif defined (__DragonFly__)
+        #define OsType "/DFLY"
     #elif defined (__FreeBSD__)
         #define OsType "/FBSD"
     #elif defined (__OpenBSD__)
