--- bfd/elfxx-x86.c.orig	2018-01-26 15:30:25 UTC
+++ bfd/elfxx-x86.c
@@ -28,8 +28,8 @@
    section.  */
 
 #define ELF32_DYNAMIC_INTERPRETER "/usr/lib/libc.so.1"
-#define ELF64_DYNAMIC_INTERPRETER "/lib/ld64.so.1"
-#define ELFX32_DYNAMIC_INTERPRETER "/lib/ldx32.so.1"
+#define ELF64_DYNAMIC_INTERPRETER "/libexec/ld-elf.so.2"
+#define ELFX32_DYNAMIC_INTERPRETER "/libexec/ld-elf.so.2"
 
 bfd_boolean
 _bfd_x86_elf_mkobject (bfd *abfd)
