--- libpkg/pkg_elf.c.orig	2012-11-06 14:40:24.000000000 +0100
+++ libpkg/pkg_elf.c	2012-11-09 20:53:51.000000000 +0100
@@ -55,6 +55,8 @@
 /* FFR: when we support installing a 32bit package on a 64bit host */
 #define _PATH_ELF32_HINTS       "/var/run/ld-elf32.so.hints"
 
+#define roundup2(x, y)	(((x)+((y)-1))&(~((y)-1))) /* if y is powers of two */
+
 static int
 filter_system_shlibs(const char *name, char *path, size_t pathlen)
 {
@@ -514,7 +516,7 @@
 		src += note.n_namesz + note.n_descsz;
 	}
 	osname = src;
-	src += note.n_namesz;
+	src += roundup2(note.n_namesz, 4);
 	if (elfhdr.e_ident[EI_DATA] == ELFDATA2MSB)
 		version = be32dec(src);
 	else
