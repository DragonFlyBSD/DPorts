--- libpkg/pkg_ports.c.orig	2015-02-04 22:24:48 UTC
+++ libpkg/pkg_ports.c
@@ -975,7 +975,6 @@ external_keyword(struct plist *plist, ch
 	}
 
 	ret = apply_keyword_file(o, plist, line, attr);
-	free_file_attr(attr);
 
 	return (ret);
 }
