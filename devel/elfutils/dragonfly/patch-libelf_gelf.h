--- libelf/gelf.h.orig
+++ libelf/gelf.h
@@ -139,6 +139,16 @@
 
 
 /* Library list structure.  */
+#ifndef LIBELF_ELF_LIB_DEFINED
+typedef struct
+{
+  Elf64_Word l_name;		/* Name (string table index) */
+  Elf64_Word l_time_stamp;	/* Timestamp */
+  Elf64_Word l_checksum;	/* Checksum */
+  Elf64_Word l_version;		/* Interface version */
+  Elf64_Word l_flags;		/* Flags */
+} Elf64_Lib;
+#endif
 typedef Elf64_Lib GElf_Lib;
 
 
