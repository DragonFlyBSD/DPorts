--- src/lib/elf/elfpltentry.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/elf/elfpltentry.cpp
@@ -22,6 +22,9 @@
 #include "elfheader.h"
 
 #include <elf.h>
+#ifndef EM_AARCH64
+#define EM_AARCH64 183
+#endif
 
 ElfPltEntry::ElfPltEntry(const ElfPltEntry&) = default;
 
