--- src/3rdparty/chromium/third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h.intermediate	2026-09-17 07:06:57 UTC
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
@@ -36,7 +36,7 @@
     !defined(__native_client__) && !defined(__asmjs__) &&             \
     !defined(__wasm__) && !defined(__HAIKU__) && !defined(__sun) &&   \
     !defined(__VXWORKS__) && !defined(__hexagon__) && !defined(__XTENSA__) && \
-    !defined(__FreeBSD__)
+    !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define ABSL_HAVE_ELF_MEM_IMAGE 1
 #endif
 
@@ -44,7 +44,7 @@
 
 #include <link.h>  // for ElfW
 
-#if defined(__FreeBSD__) && !defined(ElfW)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(ElfW)
 #define ElfW(x) __ElfN(x)
 #endif
 
