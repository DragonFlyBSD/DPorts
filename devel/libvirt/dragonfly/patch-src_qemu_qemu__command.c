--- src/qemu/qemu_command.c.orig	2026-10-01 09:02:52 UTC
+++ src/qemu/qemu_command.c
@@ -7434,6 +7434,10 @@
 
     case VIR_DOMAIN_VIRT_HYPERV:
         virBufferAddLit(&buf, "mshv");
+        break;
+
+    case VIR_DOMAIN_VIRT_NVMM:
+        virBufferAddLit(&buf, "nvmm");
         break;
 
     case VIR_DOMAIN_VIRT_KQEMU:
