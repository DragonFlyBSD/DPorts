--- src/qemu/qemu_capabilities.c.orig	Wed Mar 12 13:41:49 2025
+++ src/qemu/qemu_capabilities.c	Wed Mar 12 13:42:19 2025
@@ -681,6 +681,9 @@ VIR_ENUM_IMPL(virQEMUCaps,
               "thread-context", /* QEMU_CAPS_THREAD_CONTEXT */
               "screenshot-format-png", /* QEMU_CAPS_SCREENSHOT_FORMAT_PNG */
 
+              /* 436 */
+              "nvmm", /* QEMU_CAPS_NVMM */
+
               /* 440 */
               "machine-hpet", /* QEMU_CAPS_MACHINE_HPET */
               "netdev.stream", /* QEMU_CAPS_NETDEV_STREAM */
@@ -796,6 +799,7 @@ struct _virQEMUCaps {
     /* Capabilities which may differ depending on the accelerator. */
     virQEMUCapsAccel kvm;
     virQEMUCapsAccel hvf;
+    virQEMUCapsAccel nvmm;
     virQEMUCapsAccel tcg;
 };
 
@@ -912,6 +916,8 @@ virQEMUCapsAccelStr(virDomainVirtType type)
         return "kvm";
     else if (type == VIR_DOMAIN_VIRT_HVF)
         return "hvf";
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+        return "nvmm";
 
     return "tcg";
 }
@@ -925,6 +931,8 @@ virQEMUCapsGetAccel(virQEMUCaps *qemuCaps,
         return &qemuCaps->kvm;
     else if (type == VIR_DOMAIN_VIRT_HVF)
         return &qemuCaps->hvf;
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+        return &qemuCaps->nvmm;
 
     return &qemuCaps->tcg;
 }
@@ -1037,6 +1045,8 @@ virQEMUCapsGetMachineTypesCaps(virQEMUCaps *qemuCaps,
         accel = &qemuCaps->kvm;
     else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         accel = &qemuCaps->hvf;
+    else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        accel = &qemuCaps->nvmm;
     else
         accel = &qemuCaps->tcg;
 
@@ -1145,7 +1155,12 @@ virQEMUCapsInitGuestFromBinary(virCaps *caps,
         virCapabilitiesAddGuestDomain(guest, VIR_DOMAIN_VIRT_HVF,
                                       NULL, NULL, 0, NULL);
     }
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM)) {
+        virCapabilitiesAddGuestDomain(guest, VIR_DOMAIN_VIRT_NVMM,
+                                      NULL, NULL, 0,  NULL);
+    }
 
+
     if (ARCH_IS_X86(guestarch) || guestarch == VIR_ARCH_AARCH64 ||
         ARCH_IS_LOONGARCH(guestarch))
         virCapabilitiesAddGuestFeatureWithToggle(guest, VIR_CAPS_GUEST_FEATURE_TYPE_ACPI,
@@ -1982,6 +1997,7 @@ virQEMUCaps *virQEMUCapsNewCopy(virQEMUCaps *qemuCaps)
 
     virQEMUCapsAccelCopy(&ret->kvm, &qemuCaps->kvm);
     virQEMUCapsAccelCopy(&ret->hvf, &qemuCaps->hvf);
+    virQEMUCapsAccelCopy(&ret->hvf, &qemuCaps->nvmm);
     virQEMUCapsAccelCopy(&ret->tcg, &qemuCaps->tcg);
 
     ret->gicCapabilities = g_new0(virGICCapability, qemuCaps->ngicCapabilities);
@@ -2042,6 +2058,7 @@ void virQEMUCapsDispose(void *obj)
 
     virQEMUCapsAccelClear(&qemuCaps->kvm);
     virQEMUCapsAccelClear(&qemuCaps->hvf);
+    virQEMUCapsAccelClear(&qemuCaps->nvmm);
     virQEMUCapsAccelClear(&qemuCaps->tcg);
 }
 
@@ -2256,6 +2273,10 @@ virQEMUCapsIsVirtTypeSupported(virQEMUCaps *qemuCaps,
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         return true;
 
+    if (virtType == VIR_DOMAIN_VIRT_NVMM &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return true;
+
     if (virtType == VIR_DOMAIN_VIRT_KVM &&
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         return true;
@@ -2787,6 +2808,7 @@ virQEMUCapsHasMachines(virQEMUCaps *qemuCaps)
 
     return !!qemuCaps->kvm.nmachineTypes ||
            !!qemuCaps->hvf.nmachineTypes ||
+           !!qemuCaps->nvmm.nmachineTypes ||
            !!qemuCaps->tcg.nmachineTypes;
 }
 
@@ -3326,6 +3348,22 @@ virQEMUCapsProbeHVF(virQEMUCaps *qemuCaps G_GNUC_UNUSE
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
@@ -4673,6 +4711,10 @@ virQEMUCapsLoadCache(virArch hostArch,
         virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_HVF) < 0) {
         return -1;
     }
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM) &&
+        virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_NVMM) < 0) {
+        return -1;
+    }
     if (virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_QEMU) < 0)
         return -1;
 
@@ -4692,6 +4734,8 @@ virQEMUCapsLoadCache(virArch hostArch,
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HVF);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virXPathBoolean("boolean(./kvmSupportsNesting)", ctxt) > 0)
@@ -4997,6 +5041,8 @@ virQEMUCapsFormatCache(virQEMUCaps *qemuCaps)
         virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_KVM);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_HVF);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_QEMU);
 
     for (i = 0; i < qemuCaps->ngicCapabilities; i++) {
@@ -5501,6 +5547,9 @@ virQEMUCapsGetVirtType(virQEMUCaps *qemuCaps)
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         return VIR_DOMAIN_VIRT_HVF;
 
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return VIR_DOMAIN_VIRT_NVMM;
+
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG))
         return VIR_DOMAIN_VIRT_QEMU;
 
@@ -5552,6 +5601,10 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *qemuCaps,
     if (virQEMUCapsProbeHVF(qemuCaps))
         virQEMUCapsSet(qemuCaps, QEMU_CAPS_HVF);
 
+    /* Some capabilities may differ depending on NVMM state */
+    if (virQEMUCapsProbeQMPNVMMState(qemuCaps, mon) < 0)
+        return -1;
+
     type = virQEMUCapsGetVirtType(qemuCaps);
     accel = virQEMUCapsGetAccel(qemuCaps, type);
 
@@ -5580,6 +5633,7 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *qemuCaps,
     if (virQEMUCapsProbeQMPSGXCapabilities(qemuCaps, mon) < 0)
         return -1;
 
+
     virQEMUCapsInitProcessCaps(qemuCaps);
 
     /* The following probes rely on other previously probed capabilities.
@@ -5680,6 +5734,16 @@ virQEMUCapsInitQMP(virQEMUCaps *qemuCaps,
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
 
@@ -5736,6 +5800,8 @@ virQEMUCapsNewForBinaryInternal(virArch hostArch,
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF))
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HVF);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virQEMUCapsHaveAccel(qemuCaps)) {
@@ -6776,5 +6842,6 @@ virQEMUCapsStripMachineAliases(virQEMUCaps *qemuCaps)
 {
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_KVM);
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_HVF);
+    virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_QEMU);
 }
