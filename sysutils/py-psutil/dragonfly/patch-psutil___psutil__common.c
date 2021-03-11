--- psutil/_psutil_common.c.orig	2020-12-18 23:38:52 UTC
+++ psutil/_psutil_common.c
@@ -181,7 +181,7 @@ psutil_setup(void) {
 // Utility functions (BSD)
 // ============================================================================
 
-#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD) || defined(PSUTIL_DRAGONFLY)
 void
 convert_kvm_err(const char *syscall, char *errbuf) {
     char fullmsg[8192];
