--- w_keyboard.c.orig	2011-09-30 22:27:36.000000000 +0300
+++ w_keyboard.c
@@ -18,7 +18,7 @@
 
 #include <sys/types.h>
 #include <regex.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #include <string.h>
@@ -41,7 +41,7 @@
 #define REG_NOERROR 0
 #endif
 
-#if defined(__FreeBSD__) && !defined(REG_NOERROR)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(REG_NOERROR)
 #define REG_NOERROR 0
 #endif
 
