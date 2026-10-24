--- libpkg/pkg_elf.c.orig
+++ libpkg/pkg_elf.c
@@ -196,6 +196,10 @@
 		if (elfhdr.e_ident[EI_OSABI] == ELFOSABI_FREEBSD) {
 			elf_abi.os = PKG_OS_FREEBSD;
+		} else if (ctx.abi.os == PKG_OS_DRAGONFLY &&
+		    elfhdr.e_ident[EI_OSABI] == ELFOSABI_NONE) {
+			/* Native DragonFly shared libraries need not carry ABI notes. */
+			elf_abi.os = PKG_OS_DRAGONFLY;
 		} else if (ctx.abi.os == PKG_OS_LINUX || ctx.abi.os == PKG_OS_FREEBSD) {
 			/* There is no reliable way to identify shared libraries targeting Linux.
 			 * It would be possible to reliably identify Linux executables by checking
