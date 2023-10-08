--- ext/pg_query/include/pg_config.h.orig	2023-09-30 23:25:58 UTC
+++ ext/pg_query/include/pg_config.h
@@ -1032,6 +1032,6 @@
 #undef HAVE__GET_CPUID
 #undef USE_ARMV8_CRC32C
 #undef USE_SSE42_CRC32C_WITH_RUNTIME_CHECK
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define HAVE_STRCHRNUL
 #endif
