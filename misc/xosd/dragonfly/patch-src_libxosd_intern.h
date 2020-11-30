--- a/src/libxosd/intern.h.orig	2004-11-04 19:50:45 UTC
+++ b/src/libxosd/intern.h
@@ -1,6 +1,7 @@
 #include <stdarg.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <unistd.h>
 #include <signal.h>
@@ -46,20 +47,20 @@ static const enum DEBUG_LEVEL {
 #define DEBUG(lvl, fmt, ...) \
   do { \
     if (_xosd_debug_level & lvl) \
-      fprintf (stderr, "%s:%-4d %ld@%s: " fmt "\n", __FILE__, __LINE__, \
-          pthread_self(), __PRETTY_FUNCTION__ ,## __VA_ARGS__); \
+      fprintf (stderr, "%s:%-4d %ju@%s: " fmt "\n", __FILE__, __LINE__, \
+          (uintmax_t)pthread_self(), __PRETTY_FUNCTION__ ,## __VA_ARGS__); \
   } while (0)
 #define FUNCTION_START(lvl) \
   do { \
     if (_xosd_debug_level & Dfunction && _xosd_debug_level & lvl) \
-      fprintf (stderr, "%s:%-4d %ld<%s\n", __FILE__, __LINE__, \
-          pthread_self(), __PRETTY_FUNCTION__); \
+      fprintf (stderr, "%s:%-4d %ju<%s\n", __FILE__, __LINE__, \
+          (uintmax_t)pthread_self(), __PRETTY_FUNCTION__); \
   } while (0)
 #define FUNCTION_END(lvl) \
   do { \
     if (_xosd_debug_level & Dfunction && _xosd_debug_level & lvl) \
-      fprintf (stderr, "%s:%-4d %ld>%s\n",  __FILE__, __LINE__, \
-          pthread_self(), __PRETTY_FUNCTION__); \
+      fprintf (stderr, "%s:%-4d %ju>%s\n",  __FILE__, __LINE__, \
+          (uintmax_t)pthread_self(), __PRETTY_FUNCTION__); \
   } while (0)
 /* }}} */
 
