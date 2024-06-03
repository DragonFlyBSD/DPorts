diff --git third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
index 42790d46294..9b517872c1e 100644
--- src/3rdparty/chromium/third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
@@ -33,7 +33,8 @@
 
 #if defined(__ELF__) && !defined(__OpenBSD__) && !defined(__QNX__) && \
     !defined(__native_client__) && !defined(__asmjs__) &&             \
-    !defined(__wasm__) && !defined(__HAIKU__) && !defined(__FreeBSD__)
+    !defined(__wasm__) && !defined(__HAIKU__) && !defined(__FreeBSD__) && \
+    !defined(__DragonFly__)
 #define ABSL_HAVE_ELF_MEM_IMAGE 1
 #endif
 
@@ -41,7 +42,7 @@
 
 #include <link.h>  // for ElfW
 
-#if defined(__FreeBSD__) && !defined(ElfW)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(ElfW)
 #define ElfW(x) __ElfN(x)
 #endif
 
