--- libpkg/pkg_elf.c.orig	2026-11-12 22:54:42 UTC
+++ libpkg/pkg_elf.c
@@ -189,6 +189,10 @@ analyse_elf(struct pkg *pkg, const char *fpath, char *
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
