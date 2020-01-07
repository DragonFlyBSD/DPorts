--- libdwarf/dwarf_dump.c.orig	2014-05-26 20:36:24 UTC
+++ libdwarf/dwarf_dump.c
@@ -545,7 +545,7 @@ dwarf_get_DS_name(unsigned ds, const cha
 	case DW_DS_leading_separate:
 		*s = "DW_DS_leading_separate"; break;
 	case DW_DS_trailing_separate:
-		*s = "DW_DS_trailing_separate";
+		*s = "DW_DS_trailing_separate"; break; /* XXX correct? */
 	default:
 		return (DW_DLV_NO_ENTRY);
 	}
