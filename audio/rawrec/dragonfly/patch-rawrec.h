--- rawrec.h.intermediate	2020-11-29 12:16:55.000000000 +0000
+++ rawrec.h
@@ -8,7 +8,7 @@
 #include <sys/types.h>
 
 /* GNU C allows us to use really long integers.  */
-#ifdef __GNUC__
+#if defined(__GNUC__) && !defined(INT64_MAX)
 # define INT64_MAX 9223372036854775807LL
 #endif
 
