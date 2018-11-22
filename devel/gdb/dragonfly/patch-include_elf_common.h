--- include/elf/common.h.orig	2018-09-05 07:44:28 UTC
+++ include/elf/common.h
@@ -790,6 +790,7 @@
 /* Values for FreeBSD .note.ABI-tag notes.  Note name is "FreeBSD".  */
 
 #define NT_FREEBSD_ABI_TAG	1
+#define NT_DRAGONFLY_ABI_TAG	1
 
 /* These three macros disassemble and assemble a symbol table st_info field,
    which contains the symbol binding and symbol type.  The STB_ and STT_
