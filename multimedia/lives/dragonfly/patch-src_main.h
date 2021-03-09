--- src/main.h.orig	2020-11-03 18:21:17 UTC
+++ src/main.h
@@ -197,7 +197,7 @@ typedef int lives_pgid_t;
 #define LIVES_DIR_SEP "/"
 #define LIVES_COPYRIGHT_YEARS "2002 - 2020"
 
-#if defined (IS_DARWIN) || defined (IS_FREEBSD)
+#if defined (IS_DARWIN) || defined (IS_FREEBSD) || defined(__DragonFly__)
 #ifndef off64_t
 #define off64_t off_t
 #endif
