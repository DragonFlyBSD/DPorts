--- src/lib/elf/elfnoteentry.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/elf/elfnoteentry.cpp
@@ -20,6 +20,9 @@
 #include "elffile.h"
 
 #include <elf.h>
+#ifndef ELF_NOTE_GNU
+#define ELF_NOTE_GNU "GNU"
+#endif
 
 ElfNoteEntry::ElfNoteEntry(const ElfNoteSection* section) :
     m_section(section)
