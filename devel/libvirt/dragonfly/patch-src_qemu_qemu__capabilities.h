--- src/qemu/qemu_capabilities.h.orig	2026-10-01 09:02:52 UTC
+++ src/qemu/qemu_capabilities.h
@@ -750,6 +750,7 @@
     QEMU_CAPS_ARM_SMMUV3_CMDQV, /* arm-smmuv3.cmdqv */
     QEMU_CAPS_IOTHREAD_POLL_WEIGHT, /* -object iothread.poll-weight */
     QEMU_CAPS_WIN_DMP_GUEST_AWARE, /* 'win-dmp' is offered only to a guest that can use it */
+    QEMU_CAPS_NVMM, /* -accel nvmm */
 
     QEMU_CAPS_LAST /* this must always be the last item */
 } virQEMUCapsFlags;
