--- gdb/osabi.c.orig	2006-11-22 17:35:10.000000000 +0000
+++ gdb/osabi.c
@@ -62,6 +62,7 @@ static const char * const gdb_osabi_name
   "NetBSD a.out",
   "NetBSD ELF",
   "OpenBSD ELF",
+  "DragonFly",
   "Windows CE",
   "DJGPP",
   "NetWare",
@@ -447,6 +448,14 @@ generic_elf_osabi_sniff_abi_tag_sections
 	  return;
 	}
 
+      /* DragonFly.  */
+      if (check_note (abfd, sect, note, "DragonFly", 4, NT_FREEBSD_ABI_TAG))
+	{
+	  /* There is no need to check the version yet.  */
+	  *osabi = GDB_OSABI_DRAGONFLY;
+	  return;
+	}
+
       /* FreeBSD.  */
       if (check_note (abfd, sect, note, "FreeBSD", 4, NT_FREEBSD_ABI_TAG))
 	{
