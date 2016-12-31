--- porting.h.orig	2016-11-12 07:10:13 UTC
+++ porting.h
@@ -40,7 +40,7 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include "elf.h"
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__)
 # include <alloca.h>
 #endif
 #if defined(__linux__)
@@ -50,7 +50,7 @@
 #if defined(__GLIBC__) || defined(__UCLIBC__) || defined(__ANDROID__)
 # include <byteswap.h>
 # include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #elif defined(__sun__)
 # include <sys/isa_defs.h>
