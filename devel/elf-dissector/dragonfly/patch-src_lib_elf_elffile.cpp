--- src/lib/elf/elffile.cpp.orig
+++ src/lib/elf/elffile.cpp
@@ -5,6 +5,10 @@
 */
 
 #include "config-elf-dissector.h"
+#include "elfdefinitions.h" // must come first before <elf.h>
+#define _ELF_H_
+#define ELFMAG "\177ELF"
+#define SELFMAG 4
 #include "elffile.h"
 #include "elfheader.h"
 #include "elfsectionheader_impl.h"
