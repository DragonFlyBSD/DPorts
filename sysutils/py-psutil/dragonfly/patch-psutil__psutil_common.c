diff --git psutil/_psutil_common.c psutil/_psutil_common.c
index 096e2f37..eb588cd7 100644
--- psutil/_psutil_common.c
+++ psutil/_psutil_common.c
@@ -155,7 +155,8 @@ psutil_set_debug(PyObject *self, PyObject *args) {
 // Utility functions (BSD)
 // ============================================================================
 
-#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD) || \
+    defined(PSUTIL_DRAGONFLY)
 void
 convert_kvm_err(const char *syscall, char *errbuf) {
     char fullmsg[8192];
diff --git psutil/arch/dragonfly/cpu.c psutil/arch/dragonfly/cpu.c
new file mode 100644
index 00000000..581182a6
