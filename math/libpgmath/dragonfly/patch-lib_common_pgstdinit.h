--- lib/common/pgstdinit.h.intermediate	2019-12-29 06:42:40.000000000 +0000
+++ lib/common/pgstdinit.h
@@ -36,7 +36,7 @@ typedef unsigned long long size_t;
 #define _SIZE_T__
 #define _SIZE_T_DEFINED
 #define __SIZE_T__
-#if defined(LINUX8664) || defined(TARGET_OSX_X8664) || defined(TARGET_LLVM_64) || defined(__FreeBSD__)
+#if defined(LINUX8664) || defined(TARGET_OSX_X8664) || defined(TARGET_LLVM_64) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef unsigned long size_t;
 #else
 typedef unsigned size_t;
