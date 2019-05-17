--- common/SC_Filesystem_unix.cpp.orig	2018-03-28 20:05:07 UTC
+++ common/SC_Filesystem_unix.cpp
@@ -25,7 +25,7 @@
 /*
  * SC_Filesystem implementation for Linux/FreeBSD.
  */
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include "SC_Filesystem.hpp"
 
