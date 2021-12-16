--- tclCheck.c.orig	2021-06-11 19:54:12 UTC
+++ tclCheck.c
@@ -15,7 +15,7 @@
  *
  */
 #ifdef __GNUC__
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
@@ -537,7 +537,7 @@ void destack () {
     }
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 extern int getopt(int, char*const*, const char*);
 #endif
 
