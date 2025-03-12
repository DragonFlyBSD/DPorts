--- mozglue/baseprofiler/lul/LulElfInt.h.orig	Mon Sep 23 18:00:08 2024
+++ mozglue/baseprofiler/lul/LulElfInt.h	Tue Mar
@@ -83,7 +83,7 @@
 
 #endif
 
-#if defined(GP_OS_freebsd)
+#if defined(GP_OS_freebsd) || defined(GP_OS_dragonfly)
 
 #  ifndef ElfW
 #    define ElfW(type) Elf_##type
