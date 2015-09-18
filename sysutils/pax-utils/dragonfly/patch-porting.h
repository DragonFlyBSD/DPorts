--- porting.h.orig	2013-04-08 00:01:36.000000000 +0300
+++ porting.h
@@ -36,13 +36,13 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include "elf.h"
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__)
 # include <alloca.h>
 #endif
 #if defined(__GLIBC__) || defined(__UCLIBC__)
 # include <byteswap.h>
 # include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #elif defined(__sun__)
 # include <sys/isa_defs.h>
