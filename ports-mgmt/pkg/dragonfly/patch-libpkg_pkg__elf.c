--- libpkg/pkg_elf.c.orig	2017-03-09 12:57:56 UTC
+++ libpkg/pkg_elf.c
@@ -347,12 +347,6 @@ analyse_elf(struct pkg *pkg, const char
 		goto cleanup; /* Invalid ABI */
 	}
 
-	if (elfhdr.e_ident[EI_OSABI] != ELFOSABI_FREEBSD &&
-	    !is_old_freebsd_armheader(&elfhdr)) {
-		ret = EPKG_END;
-		goto cleanup;
-	}
-
 	if ((data = elf_getdata(dynamic, NULL)) == NULL) {
 		ret = EPKG_END; /* Some error occurred, ignore this file */
 		goto cleanup;
