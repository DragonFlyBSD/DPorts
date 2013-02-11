--- libpkg/pkg_elf.c.orig	2013-01-28 19:13:23.000000000 +0100
+++ libpkg/pkg_elf.c	2013-02-09 20:32:48.797084000 +0100
@@ -283,7 +283,8 @@
 	if (note != NULL) {
 		data = elf_getdata(note, NULL);
 		osname = (const char *) data->d_buf + sizeof(Elf_Note);
-		if (strncasecmp(osname, "freebsd", sizeof("freebsd")) != 0) {
+		if (strncasecmp(osname, "freebsd", sizeof("freebsd")) != 0 &&
+		    strncasecmp(osname, "dragonfly", sizeof("dragonfly")) != 0) {
 			ret = EPKG_END;	/* Foreign (probably linux) ELF object */
 			goto cleanup;
 		}
@@ -558,8 +559,13 @@
 	wordsize_corres_str = elf_corres_to_string(wordsize_corres,
 	    (int)elfhdr.e_ident[EI_CLASS]);
 
+#if defined(__DragonFly__)
+	snprintf(dest, sz, "%s:%d.%d:%s:%s",
+	    osname, version / 100000, (((version / 100 % 1000)+1)/2)*2,
+#else
 	snprintf(dest, sz, "%s:%d:%s:%s",
 	    osname, version / 100000,
+#endif
 	    elf_corres_to_string(mach_corres, (int) elfhdr.e_machine),
 	    wordsize_corres_str);
 
