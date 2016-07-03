--- uif2iso.c.orig	2016-06-27 19:01:00.000000000 +0300
+++ uif2iso.c
@@ -75,7 +75,7 @@ typedef uint64_t    u64;
     #if defined(__APPLE__)
         #define fseek   fseeko
         #define ftell   ftello
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
     #elif !defined(NOLFS)       // use -DNOLFS if this tool can't be compiled on your OS!
         #define off_t   off64_t
         #define fopen   fopen64
