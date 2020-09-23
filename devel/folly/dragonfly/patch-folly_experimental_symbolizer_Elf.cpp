--- folly/experimental/symbolizer/Elf.cpp.orig	2020-08-28 23:21:37 UTC
+++ folly/experimental/symbolizer/Elf.cpp
@@ -38,7 +38,7 @@
 
 #if defined(__ELF_NATIVE_CLASS)
 #define FOLLY_ELF_NATIVE_CLASS __ELF_NATIVE_CLASS
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #if defined(__LP64__)
 #define FOLLY_ELF_NATIVE_CLASS 64
 #else
