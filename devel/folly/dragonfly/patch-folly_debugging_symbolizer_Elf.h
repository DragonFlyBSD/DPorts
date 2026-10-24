--- folly/debugging/symbolizer/Elf.h.orig
+++ folly/debugging/symbolizer/Elf.h
@@ -47,7 +47,7 @@ namespace symbolizer {
 
 #if defined(ElfW)
 #define FOLLY_ELF_ELFW(name) ElfW(name)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define FOLLY_ELF_ELFW(name) Elf_##name
 #endif
 
