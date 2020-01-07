--- libelf/elf.h.intermediate	2020-01-06 10:00:07 UTC
+++ libelf/elf.h
@@ -757,6 +757,7 @@ typedef struct
 #define NT_LWPSTATUS	16		/* Contains copy of lwpstatus struct */
 #define NT_LWPSINFO	17		/* Contains copy of lwpinfo struct */
 #define NT_PRFPXREG	20		/* Contains copy of fprxregset struct */
+#define NT_BSD_ABI_TAG	32		/* DragonFly BSD .note.tag section */
 #define NT_SIGINFO	0x53494749	/* Contains copy of siginfo_t,
 					   size might increase */
 #define NT_FILE		0x46494c45	/* Contains information about mapped
