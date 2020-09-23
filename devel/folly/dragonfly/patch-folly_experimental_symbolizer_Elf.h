--- folly/experimental/symbolizer/Elf.h.intermediate	2020-09-23 19:35:21 UTC
+++ folly/experimental/symbolizer/Elf.h
@@ -40,7 +40,7 @@ namespace symbolizer {
 
 #if defined(ElfW)
 #define FOLLY_ELF_ELFW(name) ElfW(name)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define FOLLY_ELF_ELFW(name) Elf_##name
 #endif
 
