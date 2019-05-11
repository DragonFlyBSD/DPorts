--- src/simlib.h.orig	2018-10-03 16:19:37 UTC
+++ src/simlib.h
@@ -76,6 +76,11 @@ const char *SIMLIB_version_string();
 #   define SIMLIB_COMPILER  "GNU C++"
 #  endif
 
+#elif defined(__DragonFly__) && defined(__GNUC__)
+
+# define SIMLIB_SYSTEM    "DragonFly"
+# define SIMLIB_COMPILER  "GNU C++"
+
 #elif defined(__FreeBSD__) && defined(__GNUC__)
 
 # define SIMLIB_SYSTEM    "FreeBSD"
