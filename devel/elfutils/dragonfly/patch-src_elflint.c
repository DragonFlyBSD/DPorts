--- src/elflint.c.orig	2018-09-14 10:23:36 UTC
+++ src/elflint.c
@@ -4331,6 +4331,7 @@ section [%2d] '%s': unknown core file no
 	  case NT_GNU_HWCAP:
 	  case NT_GNU_BUILD_ID:
 	  case NT_GNU_GOLD_VERSION:
+	  case NT_BSD_ABI_TAG:
 	    break;
 
 	  case 0:
