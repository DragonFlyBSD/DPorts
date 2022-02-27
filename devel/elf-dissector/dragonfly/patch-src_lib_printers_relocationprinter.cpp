--- src/lib/printers/relocationprinter.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/printers/relocationprinter.cpp
@@ -26,6 +26,105 @@
 
 #include <elf.h>
 
+#ifndef R_386_NONE
+#define R_386_NONE		0
+#define R_386_32		1
+#define R_386_PC32		2
+#define R_386_GOT32		3
+#define R_386_PLT32		4
+#define R_386_COPY		5
+#define R_386_GLOB_DAT		6
+#define R_386_JMP_SLOT		7
+#define R_386_RELATIVE		8
+#define R_386_GOTOFF		9
+#define R_386_GOTPC		10
+#endif
+
+#ifndef R_386_TLS_TPOFF
+#define R_386_TLS_TPOFF		14
+#define R_386_TLS_IE		15
+#define R_386_TLS_GOTIE		16
+#define R_386_TLS_LE		17
+#define R_386_TLS_GD		18
+#define R_386_TLS_LDM		19
+#endif
+
+#ifndef R_386_TLS_GD_32
+#define R_386_TLS_GD_32		24
+#define R_386_TLS_GD_PUSH	25
+#define R_386_TLS_GD_CALL	26
+#define R_386_TLS_GD_POP	27
+#define R_386_TLS_LDM_32	28
+#define R_386_TLS_LDM_PUSH	29
+#define R_386_TLS_LDM_CALL	30
+#define R_386_TLS_LDM_POP	31
+#define R_386_TLS_LDO_32	32
+#define R_386_TLS_IE_32		33
+#define R_386_TLS_LE_32		34
+#define R_386_TLS_DTPMOD32	35
+#define R_386_TLS_DTPOFF32	36
+#define R_386_TLS_TPOFF32	37
+#endif
+
+#ifndef R_386_IRELATIVE
+#define R_386_IRELATIVE		42
+#endif
+
+#ifndef R_ARM_NONE
+#define R_ARM_NONE		0
+#define R_ARM_PC24		1
+#define R_ARM_ABS32		2
+#define R_ARM_REL32		3
+#define R_ARM_PC13		4
+#define R_ARM_ABS16		5
+#define R_ARM_ABS12		6
+#define R_ARM_THM_ABS5		7
+#define R_ARM_ABS8		8
+#define R_ARM_SBREL32		9
+#define R_ARM_THM_PC22		10
+#define R_ARM_THM_PC8		11
+#define R_ARM_AMP_VCALL9	12
+#define R_ARM_SWI24		13
+#define R_ARM_THM_SWI8		14
+#define R_ARM_XPC25		15
+#define R_ARM_THM_XPC22		16
+#define R_ARM_TLS_DTPMOD32	17
+#define R_ARM_TLS_DTPOFF32	18
+#define R_ARM_TLS_TPOFF32	19
+#define R_ARM_COPY		20
+#define R_ARM_GLOB_DAT		21
+#define R_ARM_JUMP_SLOT		22
+#define R_ARM_RELATIVE		23
+#define R_ARM_GOTOFF		24
+#define R_ARM_GOTPC		25
+#define R_ARM_GOT32		26
+#define R_ARM_PLT32		27
+#define R_ARM_GNU_VTENTRY	100
+#define R_ARM_GNU_VTINHERIT	101
+#define R_ARM_RSBREL32		250
+#define R_ARM_THM_RPC22		251
+#define R_ARM_RREL32		252
+#define R_ARM_RABS32		253
+#define R_ARM_RPC24		254
+#define R_ARM_RBASE		255
+#endif
+
+#ifndef R_X86_64_PC64
+#define R_X86_64_PC64		24
+#define R_X86_64_GOTOFF64	25
+#define R_X86_64_GOTPC32	26
+#define R_X86_64_GOT64		27
+#define R_X86_64_GOTPCREL64	28
+#define R_X86_64_GOTPC64	29
+#define R_X86_64_GOTPLT64	30
+#define R_X86_64_PLTOFF64	31
+#define R_X86_64_SIZE32		32
+#define R_X86_64_SIZE64		33
+#define R_X86_64_GOTPC32_TLSDESC 34
+#define R_X86_64_TLSDESC_CALL	35
+#define R_X86_64_TLSDESC	36
+#endif
+
 // Fix build on FreeBSD 12, which does not include these ELF relocation
 // types; they're standard, and were added to FreeBSD 13 in
 // https://cgit.freebsd.org/src/commit/?id=f7d181543fd96a89b84878ddb2d5ac010fadd9b8
