--- src/qemu/qemu_command.c.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_command.c
@@ -6739,6 +6739,10 @@ qemuBuildMachineCommandLine(virCommand *
         virBufferAddLit(&buf, ",accel=kvm");
         break;
 
+    case VIR_DOMAIN_VIRT_NVMM:
+        virBufferAddLit(&buf, ",accel=nvmm");
+        break;
+
     case VIR_DOMAIN_VIRT_KQEMU:
     case VIR_DOMAIN_VIRT_XEN:
     case VIR_DOMAIN_VIRT_LXC:
