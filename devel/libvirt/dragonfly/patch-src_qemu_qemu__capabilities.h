--- src/qemu/qemu_capabilities.h.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_capabilities.h
@@ -611,6 +611,9 @@ typedef enum { /* virQEMUCapsFlags group
     QEMU_CAPS_ACPI_INDEX, /* PCI device 'acpi-index' property */
     QEMU_CAPS_INPUT_LINUX, /* -object input-linux */
 
+    /* 405 */
+    QEMU_CAPS_NVMM, /* whether nvmm is available */
+
     QEMU_CAPS_LAST /* this must always be the last item */
 } virQEMUCapsFlags;
 
