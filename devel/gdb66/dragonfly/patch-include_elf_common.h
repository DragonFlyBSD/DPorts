--- include/elf/common.h.orig	2006-10-25 06:49:18.000000000 +0000
+++ include/elf/common.h
@@ -429,6 +429,7 @@
 /* Values for FreeBSD .note.ABI-tag notes.  Note name is "FreeBSD".  */
 
 #define NT_FREEBSD_ABI_TAG	1
+#define NT_DRAGONFLY_ABI_TAG	1
 
 /* These three macros disassemble and assemble a symbol table st_info field,
    which contains the symbol binding and symbol type.  The STB_ and STT_
