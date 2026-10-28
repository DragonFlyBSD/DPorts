--- libelf/elf.h.orig
+++ libelf/elf.h
@@ -757,6 +757,7 @@
 #define NT_LWPSTATUS	16		/* Contains copy of lwpstatus struct */
 #define NT_LWPSINFO	17		/* Contains copy of lwpinfo struct */
 #define NT_PRFPXREG	20		/* Contains copy of fprxregset struct */
+#define NT_BSD_ABI_TAG	32		/* DragonFly BSD .note.tag section */
 #define NT_SIGINFO	0x53494749	/* Contains copy of siginfo_t,
 					   size might increase */
 #define NT_FILE		0x46494c45	/* Contains information about mapped
@@ -2033,6 +2034,7 @@
   Elf64_Word l_version;		/* Interface version */
   Elf64_Word l_flags;		/* Flags */
 } Elf64_Lib;
+#define	LIBELF_ELF_LIB_DEFINED	1
 
 
 /* Legal values for l_flags.  */
