--- gdb/osabi.c.orig	2013-02-04 12:57:44.000000000 +0000
+++ gdb/osabi.c
@@ -60,6 +60,7 @@ static const char * const gdb_osabi_name
   "NetBSD a.out",
   "NetBSD ELF",
   "OpenBSD ELF",
+  "DragonFly",
   "Windows CE",
   "DJGPP",
   "Irix",
@@ -481,6 +482,15 @@ generic_elf_osabi_sniff_abi_tag_sections
 	  return;
 	}
 
+      /* DragonFly.  */
+      if (check_note (abfd, sect, note, &sectsize, "DragonFly", 4,
+		      NT_DRAGONFLY_ABI_TAG))
+	{
+	  /* There is no need to check the version yet.  */
+	  *osabi = GDB_OSABI_DRAGONFLY;
+	  return;
+	}
+
       /* FreeBSD.  */
       if (check_note (abfd, sect, note, &sectsize, "FreeBSD", 4,
 		      NT_FREEBSD_ABI_TAG))
