--- tools/profiler/lul/LulElfInt.h.orig	2026-09-04 00:01:32 UTC
+++ tools/profiler/lul/LulElfInt.h
@@ -79,7 +79,7 @@
 
 #endif
 
-#if defined(GP_OS_freebsd)
+#if defined(GP_OS_freebsd) || defined(GP_OS_dragonfly)
 
 #  ifndef ElfW
 #    define ElfW(type) Elf_##type
@@ -87,6 +87,13 @@
 
 #endif
 
+#if defined(GP_OS_dragonfly) && !defined(Elf32_Nhdr)
+// DragonFly's <elf.h> provides Elf_Note instead of the sized Elf32_Nhdr/Elf64_Nhdr
+// aliases (same layout; mirrors the breakpad elfutils.h handling).
+typedef Elf_Note Elf32_Nhdr;
+typedef Elf_Note Elf64_Nhdr;
+#endif
+
 namespace lul {
 
 // Traits classes so consumers can write templatized code to deal
