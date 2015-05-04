--- common.h.orig	2015-03-24 20:07:07 UTC
+++ common.h
@@ -490,7 +490,7 @@ typedef char* env_var_t;
 
 #define TOUPPER(a) {if ((a) > 0x60) (a) -= 0x20;}
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#ifndef MAP_ANONYMOUS
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
