--- toolkit/library/gen_buildid.py.ori	Mon Mar  3 09:26:35 2025
+++ toolkit/library/gen_buildid.py	Mon Mar  3 11:14:58 2025
@@ -66,6 +66,9 @@ def write_file(output, maybe_buildid):
     ):
         elf_note = """
 #include <elf.h>
+#if defined(__DragonFly__)
+#include <sys/elf_common.h>
+#endif
 
 #define note_name "mzbldid"
 #define note_desc "{buildid}"
@@ -78,7 +81,11 @@ def write_file(output, maybe_buildid):
 #endif
 
 struct note {{
+#if defined(__DragonFly__)
+    Elf_Nhdr header; // Elf32 or Elf64 doesn't matter, they're the same size
+#else
     Elf32_Nhdr header; // Elf32 or Elf64 doesn't matter, they're the same size
+#endif
     char name[(sizeof(note_name) + 3) / 4 * 4];
     char desc[(sizeof(note_desc) + 3) / 4 * 4];
 }};
