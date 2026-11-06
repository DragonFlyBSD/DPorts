--- daa2iso.c.orig	2026-11-06 08:41:01 UTC
+++ daa2iso.c
@@ -65,7 +65,7 @@ typedef uint64_t    u64;
     #if defined(__APPLE__)
         #define fseek   fseeko
         #define ftell   ftello
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
     #elif !defined(NOLFS)       // use -DNOLFS if this tool can't be compiled on your OS!
         #define off_t   off64_t
         #define fopen   fopen64
