diff --git third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc
index 8a588eaffee..26eebc96a43 100644
--- third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc
+++ third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc
@@ -54,7 +54,7 @@
 using Elf32_auxv_t = Aux32Info;
 using Elf64_auxv_t = Aux64Info;
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #if defined(__ELF_WORD_SIZE) && __ELF_WORD_SIZE == 64
 using Elf64_auxv_t = Elf64_Auxinfo;
 #endif
