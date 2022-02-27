--- src/qemu/qemu_capabilities.c.orig	2021-12-01 09:51:11 UTC
+++ src/qemu/qemu_capabilities.c
@@ -651,6 +651,9 @@ VIR_ENUM_IMPL(virQEMUCaps,
               "device.json", /* QEMU_CAPS_DEVICE_JSON */
               "query-dirty-rate", /* QEMU_CAPS_QUERY_DIRTY_RATE */
               "rbd-encryption", /* QEMU_CAPS_RBD_ENCRYPTION */
+
+              /* 420 */
+              "nvmm",
     );
 
 
@@ -734,6 +737,7 @@ struct _virQEMUCaps {
 
     /* Capabilities which may differ depending on the accelerator. */
     virQEMUCapsAccel kvm;
+    virQEMUCapsAccel nvmm;
     virQEMUCapsAccel tcg;
 };
 
@@ -835,6 +839,9 @@ virQEMUCapsGetAccel(virQEMUCaps *qemuCap
     if (type == VIR_DOMAIN_VIRT_KVM)
         return &qemuCaps->kvm;
 
+    if (type == VIR_DOMAIN_VIRT_NVMM)
+        return &qemuCaps->nvmm;
+
     return &qemuCaps->tcg;
 }
 
@@ -964,6 +971,8 @@ virQEMUCapsGetMachineTypesCaps(virQEMUCa
      * take the set of machine types we probed first. */
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         accel = &qemuCaps->kvm;
+    else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        accel = &qemuCaps->nvmm;
     else
         accel = &qemuCaps->tcg;
 
@@ -1075,6 +1084,11 @@ virQEMUCapsInitGuestFromBinary(virCaps *
                                       NULL, NULL, 0, NULL);
     }
 
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM)) {
+        virCapabilitiesAddGuestDomain(guest, VIR_DOMAIN_VIRT_NVMM,
+                                      NULL, NULL, 0,  NULL);
+    }
+
     if ((ARCH_IS_X86(guestarch) || guestarch == VIR_ARCH_AARCH64))
         virCapabilitiesAddGuestFeatureWithToggle(guest, VIR_CAPS_GUEST_FEATURE_TYPE_ACPI,
                                                  true, true);
@@ -1969,6 +1983,7 @@ virQEMUCaps *virQEMUCapsNewCopy(virQEMUC
     ret->cpuData = virCPUDataNewCopy(qemuCaps->cpuData);
 
     if (virQEMUCapsAccelCopy(&ret->kvm, &qemuCaps->kvm) < 0 ||
+	virQEMUCapsAccelCopy(&ret->nvmm, &qemuCaps->nvmm) < 0 ||
         virQEMUCapsAccelCopy(&ret->tcg, &qemuCaps->tcg) < 0)
         return NULL;
 
@@ -2022,6 +2037,7 @@ void virQEMUCapsDispose(void *obj)
     virSEVCapabilitiesFree(qemuCaps->sevCapabilities);
 
     virQEMUCapsAccelClear(&qemuCaps->kvm);
+    virQEMUCapsAccelClear(&qemuCaps->nvmm);
     virQEMUCapsAccelClear(&qemuCaps->tcg);
 }
 
@@ -2273,6 +2289,10 @@ virQEMUCapsIsVirtTypeSupported(virQEMUCa
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG))
         return true;
 
+    if (virtType == VIR_DOMAIN_VIRT_NVMM &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return true;
+
     if (virtType == VIR_DOMAIN_VIRT_KVM &&
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         return true;
@@ -3180,6 +3200,22 @@ virQEMUCapsProbeQMPKVMState(virQEMUCaps
     return 0;
 }
 
+static int
+virQEMUCapsProbeQMPNVMMState(virQEMUCaps *qemuCaps,
+                            qemuMonitor *mon)
+{
+    bool enabled = false;
+    bool present = false;
+
+    if (qemuMonitorGetNVMMState(mon, &enabled, &present) < 0)
+        return -1;
+
+    if (present && enabled)
+        virQEMUCapsSet(qemuCaps, QEMU_CAPS_NVMM);
+
+    return 0;
+}
+
 struct virQEMUCapsCommandLineProps {
     const char *option;
     const char *param;
@@ -3992,7 +4028,14 @@ virQEMUCapsLoadAccel(virQEMUCaps *qemuCa
                      virDomainVirtType type)
 {
     virQEMUCapsAccel *caps = virQEMUCapsGetAccel(qemuCaps, type);
-    const char *typeStr = type == VIR_DOMAIN_VIRT_KVM ? "kvm" : "tcg";
+    const char *typeStr;
+
+    if (type == VIR_DOMAIN_VIRT_KVM)
+      typeStr = "kvm";
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+      typeStr = "nvmm";
+    else
+      typeStr = "tcg";
 
     if (virQEMUCapsLoadHostCPUModelInfo(caps, ctxt, typeStr) < 0)
         return -1;
@@ -4374,6 +4417,7 @@ virQEMUCapsLoadCache(virArch hostArch,
     }
 
     if (virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_KVM) < 0 ||
+	virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_NVMM) < 0 ||
         virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_QEMU) < 0)
         return -1;
 
@@ -4384,6 +4428,7 @@ virQEMUCapsLoadCache(virArch hostArch,
         return -1;
 
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
+    virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virXPathBoolean("boolean(./kvmSupportsNesting)", ctxt) > 0)
@@ -4533,7 +4578,14 @@ virQEMUCapsFormatAccel(virQEMUCaps *qemu
                        virDomainVirtType type)
 {
     virQEMUCapsAccel *caps = virQEMUCapsGetAccel(qemuCaps, type);
-    const char *typeStr = type == VIR_DOMAIN_VIRT_KVM ? "kvm" : "tcg";
+    const char *typeStr;
+
+    if (type == VIR_DOMAIN_VIRT_KVM)
+      typeStr = "kvm";
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+      typeStr = "nvmm";
+    else
+      typeStr = "tcg";
 
     virQEMUCapsFormatHostCPUModelInfo(caps, buf, typeStr);
     virQEMUCapsFormatCPUModels(caps, buf, typeStr);
@@ -4617,6 +4669,7 @@ virQEMUCapsFormatCache(virQEMUCaps *qemu
                       virArchToString(qemuCaps->arch));
 
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_KVM);
+    virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_QEMU);
 
     for (i = 0; i < qemuCaps->ngicCapabilities; i++) {
@@ -5237,6 +5290,9 @@ virQEMUCapsGetVirtType(virQEMUCaps *qemu
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         return VIR_DOMAIN_VIRT_KVM;
 
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return VIR_DOMAIN_VIRT_NVMM;
+
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG))
         return VIR_DOMAIN_VIRT_QEMU;
 
@@ -5289,6 +5345,10 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *q
     if (virQEMUCapsProbeQMPKVMState(qemuCaps, mon) < 0)
         return -1;
 
+    /* Some capabilities may differ depending on NVMM state */
+    if (virQEMUCapsProbeQMPNVMMState(qemuCaps, mon) < 0)
+        return -1;
+
     type = virQEMUCapsGetVirtType(qemuCaps);
     accel = virQEMUCapsGetAccel(qemuCaps, type);
 
@@ -5315,6 +5375,7 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *q
     if (virQEMUCapsProbeQMPSEVCapabilities(qemuCaps, mon) < 0)
         return -1;
 
+
     virQEMUCapsInitProcessCaps(qemuCaps);
 
     /* The following probes rely on other previously probed capabilities.
@@ -5415,6 +5476,16 @@ virQEMUCapsInitQMP(virQEMUCaps *qemuCaps
         virQEMUCapsInitQMPSingle(qemuCaps, libDir, runUid, runGid, true) < 0)
         return -1;
 
+    /*
+     * If NVMM was enabled during the first probe, we need to explicitly probe
+     * for TCG capabilities by asking the same binary again and turning KVM
+     * off.
+     */
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM) &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG) &&
+        virQEMUCapsInitQMPSingle(qemuCaps, libDir, runUid, runGid, true) < 0)
+        return -1;
+
     return 0;
 }
 
@@ -5471,6 +5542,7 @@ virQEMUCapsNewForBinaryInternal(virArch
     qemuCaps->libvirtVersion = LIBVIR_VERSION_NUMBER;
 
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
+    virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM)) {
