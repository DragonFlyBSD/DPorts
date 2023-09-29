diff --git third_party/libpng/arm/filter_neon.S third_party/libpng/arm/filter_neon.S
index 2308aad13e6..df123cd0bbe 100644
--- third_party/libpng/arm/filter_neon.S
+++ third_party/libpng/arm/filter_neon.S
@@ -16,7 +16,7 @@
 #define PNG_VERSION_INFO_ONLY
 #include "../pngpriv.h"
 
-#if (defined(__linux__) || defined(__FreeBSD__)) && defined(__ELF__)
+#if (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && defined(__ELF__)
 .section .note.GNU-stack,"",%progbits /* mark stack as non-executable */
 #endif
 
