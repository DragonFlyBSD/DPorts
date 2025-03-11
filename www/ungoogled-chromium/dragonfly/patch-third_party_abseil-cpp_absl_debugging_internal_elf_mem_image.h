diff --git third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
index a799af4a7c38..f98658601c23 100644
--- third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
+++ third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
@@ -35,7 +35,8 @@
 #if defined(__ELF__) && !defined(__OpenBSD__) && !defined(__QNX__) && \
     !defined(__native_client__) && !defined(__asmjs__) &&             \
     !defined(__wasm__) && !defined(__HAIKU__) && !defined(__sun) &&   \
-    !defined(__VXWORKS__) && !defined(__hexagon__) && !defined(__FreeBSD__)
+    !defined(__VXWORKS__) && !defined(__hexagon__) && !defined(__FreeBSD__) &&   \
+    !defined(__DragonFly__)
 #define ABSL_HAVE_ELF_MEM_IMAGE 1
 #endif
 
@@ -43,7 +44,7 @@
 
 #include <link.h>  // for ElfW
 
-#if defined(__FreeBSD__) && !defined(ElfW)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(ElfW)
 #define ElfW(x) __ElfN(x)
 #endif
 
