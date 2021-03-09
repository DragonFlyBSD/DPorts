--- src/elflint.c.orig	2020-03-30 12:17:45 UTC
+++ src/elflint.c
@@ -4336,6 +4336,7 @@ section [%2d] '%s': unknown core file no
 	  case NT_GNU_BUILD_ID:
 	  case NT_GNU_GOLD_VERSION:
 	  case NT_GNU_PROPERTY_TYPE_0:
+	  case NT_BSD_ABI_TAG:
 	    if (nhdr.n_namesz == sizeof ELF_NOTE_GNU
 		&& strcmp (data->d_buf + name_offset, ELF_NOTE_GNU) == 0)
 	      break;
