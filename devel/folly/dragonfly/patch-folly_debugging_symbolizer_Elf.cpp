--- folly/debugging/symbolizer/Elf.cpp.orig
+++ folly/debugging/symbolizer/Elf.cpp
@@ -39,7 +39,7 @@
 
 #if defined(__ELF_NATIVE_CLASS)
 #define FOLLY_ELF_NATIVE_CLASS __ELF_NATIVE_CLASS
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #if defined(__LP64__)
 #define FOLLY_ELF_NATIVE_CLASS 64
 #else
