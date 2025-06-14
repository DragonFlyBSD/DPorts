--- deps/v8/third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc.orig	2022-10-15 18:53:40.059652000 +0200
+++ deps/v8/third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc	2022-10-15 18:53:51.109406000 +0200
@@ -54,7 +54,7 @@
 using Elf32_auxv_t = Aux32Info;
 using Elf64_auxv_t = Aux64Info;
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #if defined(__ELF_WORD_SIZE) && __ELF_WORD_SIZE == 64
 using Elf64_auxv_t = Elf64_Auxinfo;
 #endif
