--- libpkg/pkg_elf.c.orig
+++ libpkg/pkg_elf.c
@@ -195,6 +195,10 @@
 		 */
 		if (elfhdr.e_ident[EI_OSABI] == ELFOSABI_FREEBSD) {
 			elf_abi.os = PKG_OS_FREEBSD;
+		} else if (ctx.abi.os == PKG_OS_DRAGONFLY &&
+		    elfhdr.e_ident[EI_OSABI] == ELFOSABI_NONE) {
+			/* Native DragonFly shared libraries need not carry ABI notes. */
+			elf_abi.os = PKG_OS_DRAGONFLY;
 		} else if (ctx.abi.os == PKG_OS_LINUX || ctx.abi.os == PKG_OS_FREEBSD) {
 			/* There is no reliable way to identify shared libraries targeting Linux.
 			 * It would be possible to reliably identify Linux executables by checking
@@ -508,10 +512,13 @@
 	};
 	uint32_t version = 0;
 	int version_style = 1;
+	bool found = false;
 
 	src = data->d_buf;
 
-	while ((uintptr_t)src < ((uintptr_t)data->d_buf + data->d_size)) {
+	/* Stop at trailing padding shorter than a note header. */
+	while ((uintptr_t)src + sizeof(Elf_Note) <=
+	    ((uintptr_t)data->d_buf + data->d_size)) {
 		memcpy(&note, src, sizeof(Elf_Note));
 		src += sizeof(Elf_Note);
 		if ((strncmp ((const char *) src, "FreeBSD", note.n_namesz) == 0) ||
@@ -520,18 +527,20 @@
 		    (note.n_namesz == 0)) {
 			if (note.n_type == NT_VERSION) {
 				version_style = 1;
+				found = true;
 				break;
 			}
 		}
 		if (strncmp ((const char *) src, "GNU", note.n_namesz) == 0) {
 			if (note.n_type == NT_GNU_ABI_TAG) {
 				version_style = 2;
+				found = true;
 				break;
 			}
 		}
 		src += roundup2(note.n_namesz + note.n_descsz, 4);
 	}
-	if ((uintptr_t)src >= ((uintptr_t)data->d_buf + data->d_size)) {
+	if (!found) {
 		return (false);
 	}
 	if (version_style == 2) {
