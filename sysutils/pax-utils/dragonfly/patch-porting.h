--- porting.h.orig	2022-04-25 01:19:39 UTC
+++ porting.h
@@ -41,7 +41,7 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include "elf.h"
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
 # include <alloca.h>
 #endif
 #if defined(__linux__)
@@ -56,7 +56,7 @@
 #if defined(__GLIBC__) || defined(__UCLIBC__) || defined(__ANDROID__)
 # include <byteswap.h>
 # include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #elif defined(__sun__)
 # include <sys/isa_defs.h>
