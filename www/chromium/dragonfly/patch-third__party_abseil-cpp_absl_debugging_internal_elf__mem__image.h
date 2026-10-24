--- third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h.orig	2026-09-09 12:00:00 UTC
+++ third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
@@ -35,7 +35,7 @@
 #if defined(__ELF__) && !defined(__OpenBSD__) && !defined(__QNX__) &&    \
     !defined(__asmjs__) && !defined(__wasm__) && !defined(__HAIKU__) &&  \
     !defined(__sun) && !defined(__VXWORKS__) && !defined(__hexagon__) && \
-    !defined(__XTENSA__) && !defined(__FreeBSD__)
+    !defined(__XTENSA__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define ABSL_HAVE_ELF_MEM_IMAGE 1
 #endif
 
@@ -43,7 +43,7 @@
 
 #include <link.h>  // for ElfW
 
-#if defined(__FreeBSD__) && !defined(ElfW)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(ElfW)
 #define ElfW(x) __ElfN(x)
 #endif
 
