--- util/elf2efi.c.orig	2018-07-09 15:32:32 UTC
+++ util/elf2efi.c
@@ -612,27 +612,35 @@ static void process_reloc ( struct elf_f
 		 */
 	} else {
 		switch ( mrel ) {
+#ifndef __DragonFly__
 		case ELF_MREL ( EM_386, R_386_NONE ) :
 		case ELF_MREL ( EM_ARM, R_ARM_NONE ) :
+#endif
 		case ELF_MREL ( EM_X86_64, R_X86_64_NONE ) :
 		case ELF_MREL ( EM_AARCH64, R_AARCH64_NONE ) :
 		case ELF_MREL ( EM_AARCH64, R_AARCH64_NULL ) :
 			/* Ignore dummy relocations used by REQUIRE_SYMBOL() */
 			break;
+#ifndef __DragonFly__
 		case ELF_MREL ( EM_386, R_386_32 ) :
 		case ELF_MREL ( EM_ARM, R_ARM_ABS32 ) :
 			/* Generate a 4-byte PE relocation */
 			generate_pe_reloc ( pe_reltab, offset, 4 );
 			break;
+#endif
 		case ELF_MREL ( EM_X86_64, R_X86_64_64 ) :
 		case ELF_MREL ( EM_AARCH64, R_AARCH64_ABS64 ) :
 			/* Generate an 8-byte PE relocation */
 			generate_pe_reloc ( pe_reltab, offset, 8 );
 			break;
+#ifndef __DragonFly__
 		case ELF_MREL ( EM_386, R_386_PC32 ) :
+#endif
 		case ELF_MREL ( EM_ARM, R_ARM_CALL ) :
+#ifndef __DragonFly__
 		case ELF_MREL ( EM_ARM, R_ARM_REL32 ) :
 		case ELF_MREL ( EM_ARM, R_ARM_THM_PC22 ) :
+#endif
 		case ELF_MREL ( EM_ARM, R_ARM_THM_JUMP24 ) :
 		case ELF_MREL ( EM_ARM, R_ARM_V4BX ):
 		case ELF_MREL ( EM_X86_64, R_X86_64_PC32 ) :
