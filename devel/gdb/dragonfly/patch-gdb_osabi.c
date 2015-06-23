--- gdb/osabi.c.orig	2015-02-19 11:58:07 UTC
+++ gdb/osabi.c
@@ -69,6 +69,7 @@ static const struct osabi_names gdb_osab
   { "NetBSD a.out", NULL },
   { "NetBSD ELF", NULL },
   { "OpenBSD ELF", NULL },
+  { "DragonFly", NULL },
   { "Windows CE", NULL },
   { "DJGPP", NULL },
   { "Irix", NULL },
@@ -501,6 +502,15 @@ generic_elf_osabi_sniff_abi_tag_sections
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
