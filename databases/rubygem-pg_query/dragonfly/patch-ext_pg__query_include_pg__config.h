--- ext/pg_query/include/pg_config.h.intermediate	2022-01-25 12:45:35.000000000 +0000
+++ ext/pg_query/include/pg_config.h
@@ -987,6 +987,6 @@
 #undef HAVE_EXECINFO_H
 #undef HAVE_BACKTRACE_SYMBOLS
 #undef HAVE__GET_CPUID
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HAVE_STRCHRNUL
 #endif
