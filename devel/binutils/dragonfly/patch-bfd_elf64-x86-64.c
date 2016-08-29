--- bfd/elf64-x86-64.c.orig	2016-08-03 07:36:51 UTC
+++ bfd/elf64-x86-64.c
@@ -530,7 +530,7 @@ elf_x86_64_write_core_note (bfd *abfd, c
 /* The name of the dynamic interpreter.	 This is put in the .interp
    section.  */
 
-#define ELF64_DYNAMIC_INTERPRETER "/lib/ld64.so.1"
+#define ELF64_DYNAMIC_INTERPRETER "/libexec/ld-elf.so.2"
 #define ELF32_DYNAMIC_INTERPRETER "/lib/ldx32.so.1"
 
 /* If ELIMINATE_COPY_RELOCS is non-zero, the linker will try to avoid
