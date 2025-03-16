--- absl/debugging/internal/vdso_support.cc.orig	Wed Nov  3 15:26:14 2021
+++ absl/debugging/internal/vdso_support.cc	Tue Mar
@@ -50,7 +50,7 @@
 #define AT_SYSINFO_EHDR 33  // for crosstoolv10
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 using Elf64_auxv_t = Elf64_Auxinfo;
 using Elf32_auxv_t = Elf32_Auxinfo;
 #endif
