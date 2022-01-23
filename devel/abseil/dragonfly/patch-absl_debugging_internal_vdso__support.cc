--- absl/debugging/internal/vdso_support.cc.intermediate	2022-01-23 20:06:13.000000000 +0000
+++ absl/debugging/internal/vdso_support.cc
@@ -50,7 +50,7 @@
 #define AT_SYSINFO_EHDR 33  // for crosstoolv10
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #if defined(__ELF_WORD_SIZE) && __ELF_WORD_SIZE == 64
 using Elf64_auxv_t = Elf64_Auxinfo;
 #endif
