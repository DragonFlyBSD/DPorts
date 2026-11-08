--- gdb/osabi.c.orig
+++ gdb/osabi.c
@@ -66,6 +66,7 @@
   { "Solaris", NULL },
   { "GNU/Linux", "linux(-gnu[^-]*)?" },
   { "FreeBSD", NULL },
+  { "DragonFly", NULL },
   { "NetBSD", NULL },
   { "OpenBSD", NULL },
   { "WindowsCE", NULL },
@@ -511,6 +512,15 @@
 	      warning (_("GNU ABI tag value %u unrecognized."), abi_tag);
 	      break;
 	    }
+	  return;
+	}
+
+      /* DragonFly.  */
+      if (check_note (abfd, sect, note, &sectsize, "DragonFly", 4,
+		      NT_DRAGONFLY_ABI_TAG))
+	{
+	  /* There is no need to check the version yet.  */
+	  *osabi = GDB_OSABI_DRAGONFLY;
 	  return;
 	}
 
