--- src/qemu/qemu_process.c.orig	2026-10-01 09:02:52 UTC
+++ src/qemu/qemu_process.c
@@ -7497,6 +7497,12 @@
                                                virQEMUDriverConfig *cfg,
                                                const virDomainDef *def)
 {
+#if defined(__DragonFly__)
+    /* virtlogd would hand QEMU a pipe, and DragonFly pipes are O_RDWR:
+     * QEMU's fdset lookup rejects that for a write-only chardev. */
+    logManager = NULL;
+#endif
+
     if (logManager) {
         int flags = 0;
 
@@ -10429,6 +10435,8 @@
 
 #if defined(__linux__)
 # define hwaccel "kvm:mshv:tcg"
+#elif defined(__DragonFly__)
+# define hwaccel "nvmm:tcg"
 #elif defined(__APPLE__)
 # define hwaccel "hvf:tcg"
 #else
