diff --git third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
index 0272f0305d8..23096f45f68 100644
--- third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
+++ third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
@@ -34,7 +34,8 @@
 #if defined(__ELF__) && !defined(__OpenBSD__) && !defined(__QNX__) && \
     !defined(__native_client__) && !defined(__asmjs__) &&             \
     !defined(__wasm__) && !defined(__HAIKU__) && !defined(__sun) &&   \
-    !defined(__VXWORKS__) && !defined(__hexagon__) && !defined(__FreeBSD__)
+    !defined(__VXWORKS__) && !defined(__hexagon__) && !defined(__FreeBSD__) &&   \
+    !defined(__DragonFly__)
 #define ABSL_HAVE_ELF_MEM_IMAGE 1
 #endif
 
@@ -42,7 +43,7 @@
 
 #include <link.h>  // for ElfW
 
-#if defined(__FreeBSD__) && !defined(ElfW)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(ElfW)
 #define ElfW(x) __ElfN(x)
 #endif
 
