--- toolkit/crashreporter/google-breakpad/src/common/linux/elfutils.cc.orig	2026-09-04 00:01:32 UTC
+++ toolkit/crashreporter/google-breakpad/src/common/linux/elfutils.cc
@@ -35,7 +35,7 @@
 #include "common/linux/linux_libc_support.h"
 #include "common/linux/elfutils-inl.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  define ElfW(type) Elf_##type
 #endif
 
