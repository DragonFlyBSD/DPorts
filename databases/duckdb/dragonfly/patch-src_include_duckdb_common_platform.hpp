--- src/include/duckdb/common/platform.hpp.orig	2026-09-27 18:15:47 UTC
+++ src/include/duckdb/common/platform.hpp
@@ -15,7 +15,7 @@
 #define DUCKDB_QUOTE_DEFINE(x)      DUCKDB_QUOTE_DEFINE_IMPL(x)
 #endif
 
-#if defined(_WIN32) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(_WIN32) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #else
 #if !defined(_GNU_SOURCE)
 #define _GNU_SOURCE
