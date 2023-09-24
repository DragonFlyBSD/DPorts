--- src/qemu/qemu_capabilities.c.orig	2023-06-01 09:40:25 UTC
+++ src/qemu/qemu_capabilities.c
@@ -681,6 +681,9 @@ VIR_ENUM_IMPL(virQEMUCaps,
               "thread-context", /* QEMU_CAPS_THREAD_CONTEXT */
               "screenshot-format-png", /* QEMU_CAPS_SCREENSHOT_FORMAT_PNG */
 
+              /* 436 */
+              "nvmm", /* QEMU_CAPS_NVMM */
+
               /* 440 */
               "machine-hpet", /* QEMU_CAPS_MACHINE_HPET */
               "netdev.stream", /* QEMU_CAPS_NETDEV_STREAM */
@@ -781,6 +784,7 @@ struct _virQEMUCaps {
     /* Capabilities which may differ depending on the accelerator. */
     virQEMUCapsAccel kvm;
     virQEMUCapsAccel hvf;
+    virQEMUCapsAccel nvmm;
     virQEMUCapsAccel tcg;
 };
 
@@ -897,6 +901,8 @@ virQEMUCapsAccelStr(virDomainVirtType ty
         return "kvm";
     else if (type == VIR_DOMAIN_VIRT_HVF)
         return "hvf";
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+        return "nvmm";
 
     return "tcg";
 }
@@ -910,6 +916,8 @@ virQEMUCapsGetAccel(virQEMUCaps *qemuCap
         return &qemuCaps->kvm;
     else if (type == VIR_DOMAIN_VIRT_HVF)
         return &qemuCaps->hvf;
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+        return &qemuCaps->nvmm;
 
     return &qemuCaps->tcg;
 }
@@ -1022,6 +1030,8 @@ virQEMUCapsGetMachineTypesCaps(virQEMUCa
         accel = &qemuCaps->kvm;
     else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         accel = &qemuCaps->hvf;
+    else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        accel = &qemuCaps->nvmm;
     else
         accel = &qemuCaps->tcg;
 
@@ -1130,6 +1140,11 @@ virQEMUCapsInitGuestFromBinary(virCaps *
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
@@ -1969,6 +1984,7 @@ virQEMUCaps *virQEMUCapsNewCopy(virQEMUC
 
     virQEMUCapsAccelCopy(&ret->kvm, &qemuCaps->kvm);
     virQEMUCapsAccelCopy(&ret->hvf, &qemuCaps->hvf);
+    virQEMUCapsAccelCopy(&ret->hvf, &qemuCaps->nvmm);
     virQEMUCapsAccelCopy(&ret->tcg, &qemuCaps->tcg);
 
     ret->gicCapabilities = g_new0(virGICCapability, qemuCaps->ngicCapabilities);
@@ -2029,6 +2045,7 @@ void virQEMUCapsDispose(void *obj)
 
     virQEMUCapsAccelClear(&qemuCaps->kvm);
     virQEMUCapsAccelClear(&qemuCaps->hvf);
+    virQEMUCapsAccelClear(&qemuCaps->nvmm);
     virQEMUCapsAccelClear(&qemuCaps->tcg);
 }
 
@@ -2284,6 +2301,10 @@ virQEMUCapsIsVirtTypeSupported(virQEMUCa
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         return true;
 
+    if (virtType == VIR_DOMAIN_VIRT_NVMM &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return true;
+
     if (virtType == VIR_DOMAIN_VIRT_KVM &&
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         return true;
@@ -2785,6 +2806,7 @@ virQEMUCapsHasMachines(virQEMUCaps *qemu
 
     return !!qemuCaps->kvm.nmachineTypes ||
            !!qemuCaps->hvf.nmachineTypes ||
+           !!qemuCaps->nvmm.nmachineTypes ||
            !!qemuCaps->tcg.nmachineTypes;
 }
 
@@ -3324,6 +3346,22 @@ virQEMUCapsProbeHVF(virQEMUCaps *qemuCap
 }
 #endif
 
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
@@ -4700,6 +4738,10 @@ virQEMUCapsLoadCache(virArch hostArch,
         virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_HVF) < 0) {
         return -1;
     }
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM) &&
+        virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_NVMM) < 0) {
+        return -1;
+    }
     if (virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_QEMU) < 0)
         return -1;
 
@@ -4719,6 +4761,8 @@ virQEMUCapsLoadCache(virArch hostArch,
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HVF);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virXPathBoolean("boolean(./kvmSupportsNesting)", ctxt) > 0)
@@ -5024,6 +5068,8 @@ virQEMUCapsFormatCache(virQEMUCaps *qemu
         virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_KVM);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_HVF);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_QEMU);
 
     for (i = 0; i < qemuCaps->ngicCapabilities; i++) {
@@ -5523,6 +5569,9 @@ virQEMUCapsGetVirtType(virQEMUCaps *qemu
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         return VIR_DOMAIN_VIRT_HVF;
 
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return VIR_DOMAIN_VIRT_NVMM;
+
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG))
         return VIR_DOMAIN_VIRT_QEMU;
 
@@ -5576,6 +5625,10 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *q
     if (virQEMUCapsProbeHVF(qemuCaps))
         virQEMUCapsSet(qemuCaps, QEMU_CAPS_HVF);
 
+    /* Some capabilities may differ depending on NVMM state */
+    if (virQEMUCapsProbeQMPNVMMState(qemuCaps, mon) < 0)
+        return -1;
+
     type = virQEMUCapsGetVirtType(qemuCaps);
     accel = virQEMUCapsGetAccel(qemuCaps, type);
 
@@ -5604,6 +5657,7 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *q
     if (virQEMUCapsProbeQMPSGXCapabilities(qemuCaps, mon) < 0)
         return -1;
 
+
     virQEMUCapsInitProcessCaps(qemuCaps);
 
     /* The following probes rely on other previously probed capabilities.
@@ -5704,6 +5758,16 @@ virQEMUCapsInitQMP(virQEMUCaps *qemuCaps
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
 
@@ -5760,6 +5824,8 @@ virQEMUCapsNewForBinaryInternal(virArch
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HVF);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virQEMUCapsHaveAccel(qemuCaps)) {
@@ -6826,5 +6892,6 @@ virQEMUCapsStripMachineAliases(virQEMUCa
 {
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_KVM);
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_HVF);
+    virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_QEMU);
 }
