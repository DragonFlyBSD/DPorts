--- ext/pg_query/include/postgres/pg_config.h.orig	2024-06-05 21:05:24 UTC
+++ ext/pg_query/include/postgres/pg_config.h
@@ -414,7 +414,7 @@
 #define HAVE_STDLIB_H 1
 
 /* Define to 1 if you have the `strchrnul' function. */
-/* #undef HAVE_STRCHRNUL */
+#define HAVE_STRCHRNUL 1
 
 /* Define to 1 if you have the `strerror_r' function. */
 #define HAVE_STRERROR_R 1
