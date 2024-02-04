--- ext/pg_query/include/pg_config.h.orig	2024-02-03 17:30:10 UTC
+++ ext/pg_query/include/pg_config.h
@@ -525,7 +525,7 @@
 #define HAVE_STDLIB_H 1
 
 /* Define to 1 if you have the `strchrnul' function. */
-/* #undef HAVE_STRCHRNUL */
+#define HAVE_STRCHRNUL 1
 
 /* Define to 1 if you have the `strerror_r' function. */
 #define HAVE_STRERROR_R 1
