--- toolkit/library/gen_buildid.py.orig	Mon Sep 23 18:00:17 2024
+++ toolkit/library/gen_buildid.py	Tue Mar
@@ -80,7 +80,7 @@ def write_file(output, maybe_buildid):
 #endif
 
 struct note {{
-    Elf32_Nhdr header; // Elf32 or Elf64 doesn't matter, they're the same size
+    Elf_Nhdr header; // Elf32 or Elf64 doesn't matter, they're the same size
     char name[(sizeof(note_name) + 3) / 4 * 4];
     char desc[(sizeof(note_desc) + 3) / 4 * 4];
 }};
