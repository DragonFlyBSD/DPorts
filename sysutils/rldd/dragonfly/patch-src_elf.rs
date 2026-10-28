--- src/elf.rs.orig
+++ src/elf.rs
@@ -625,6 +625,10 @@
 #[cfg(target_os = "freebsd")]
 fn check_elf_header(elc: &ElfInfo) -> bool {
     elc.ei_osabi == ELFOSABI_FREEBSD
+}
+#[cfg(target_os = "dragonfly")]
+fn check_elf_header(elc: &ElfInfo) -> bool {
+    elc.ei_osabi == ELFOSABI_SYSV
 }
 #[cfg(target_os = "openbsd")]
 fn check_elf_header(elc: &ElfInfo) -> bool {
