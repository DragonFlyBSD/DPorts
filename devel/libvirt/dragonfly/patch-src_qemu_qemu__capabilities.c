--- src/qemu/qemu_capabilities.c.orig	2026-10-01 09:02:52 UTC
+++ src/qemu/qemu_capabilities.c
@@ -776,6 +776,7 @@
               "arm-smmuv3.cmdqv", /* QEMU_CAPS_ARM_SMMUV3_CMDQV */
               "iothread.poll-weight", /* QEMU_CAPS_IOTHREAD_POLL_WEIGHT */
               "win-dmp.guest-aware", /* QEMU_CAPS_WIN_DMP_GUEST_AWARE */
+              "nvmm", /* QEMU_CAPS_NVMM */
     );
 
 
@@ -871,6 +872,7 @@
     virQEMUCapsAccel hvf;
     virQEMUCapsAccel tcg;
     virQEMUCapsAccel mshv;
+    virQEMUCapsAccel nvmm;
 };
 
 static virClass *virQEMUCapsClass;
@@ -970,7 +972,8 @@
 {
     return virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM) ||
            virQEMUCapsGet(qemuCaps, QEMU_CAPS_HVF) ||
-           virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV);
+           virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV) ||
+           virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM);
 }
 
 
@@ -983,6 +986,8 @@
         return "hvf";
     else if (type == VIR_DOMAIN_VIRT_HYPERV)
         return "mshv";
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+        return "nvmm";
 
     return "tcg";
 }
@@ -998,6 +1003,8 @@
         return &qemuCaps->hvf;
     else if (type == VIR_DOMAIN_VIRT_HYPERV)
         return &qemuCaps->mshv;
+    else if (type == VIR_DOMAIN_VIRT_NVMM)
+        return &qemuCaps->nvmm;
 
     return &qemuCaps->tcg;
 }
@@ -1107,6 +1114,8 @@
         accel = &qemuCaps->hvf;
     else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV))
         accel = &qemuCaps->mshv;
+    else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        accel = &qemuCaps->nvmm;
     else
         accel = &qemuCaps->tcg;
 
@@ -1219,6 +1228,10 @@
         virCapabilitiesAddGuestDomain(guest, VIR_DOMAIN_VIRT_HYPERV,
                                       NULL, NULL, 0, NULL);
     }
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM)) {
+        virCapabilitiesAddGuestDomain(guest, VIR_DOMAIN_VIRT_NVMM,
+                                      NULL, NULL, 0, NULL);
+    }
 
     if (ARCH_IS_X86(guestarch) || guestarch == VIR_ARCH_AARCH64 ||
         ARCH_IS_LOONGARCH(guestarch))
@@ -2145,6 +2158,7 @@
     virQEMUCapsAccelCopy(&ret->hvf, &qemuCaps->hvf);
     virQEMUCapsAccelCopy(&ret->tcg, &qemuCaps->tcg);
     virQEMUCapsAccelCopy(&ret->mshv, &qemuCaps->mshv);
+    virQEMUCapsAccelCopy(&ret->nvmm, &qemuCaps->nvmm);
 
     ret->gicCapabilities = g_new0(virGICCapability, qemuCaps->ngicCapabilities);
     ret->ngicCapabilities = qemuCaps->ngicCapabilities;
@@ -2205,6 +2219,7 @@
     virQEMUCapsAccelClear(&qemuCaps->hvf);
     virQEMUCapsAccelClear(&qemuCaps->tcg);
     virQEMUCapsAccelClear(&qemuCaps->mshv);
+    virQEMUCapsAccelClear(&qemuCaps->nvmm);
 }
 
 void
@@ -2434,6 +2449,10 @@
 
     if (virtType == VIR_DOMAIN_VIRT_HYPERV &&
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV))
+        return true;
+
+    if (virtType == VIR_DOMAIN_VIRT_NVMM &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
         return true;
 
     return false;
@@ -3009,6 +3028,7 @@
     return !!qemuCaps->kvm.nmachineTypes ||
            !!qemuCaps->hvf.nmachineTypes ||
            !!qemuCaps->mshv.nmachineTypes ||
+           !!qemuCaps->nvmm.nmachineTypes ||
            !!qemuCaps->tcg.nmachineTypes;
 }
 
@@ -3585,6 +3605,8 @@
         virQEMUCapsSet(qemuCaps, QEMU_CAPS_KVM);
     else if (STREQ(enabled, "mshv"))
         virQEMUCapsSet(qemuCaps, QEMU_CAPS_MSHV);
+    else if (STREQ(enabled, "nvmm"))
+        virQEMUCapsSet(qemuCaps, QEMU_CAPS_NVMM);
 
     return 0;
 }
@@ -5074,6 +5096,10 @@
         virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_HYPERV) < 0) {
         return -1;
     }
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM) &&
+        virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_NVMM) < 0) {
+        return -1;
+    }
     if (virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_QEMU) < 0)
         return -1;
 
@@ -5095,6 +5121,8 @@
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HVF);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV))
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HYPERV);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virXPathBoolean("boolean(./kvmSupportsNesting)", ctxt) > 0)
@@ -5447,6 +5475,8 @@
         virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_HVF);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV))
         virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_HYPERV);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_QEMU);
 
     for (i = 0; i < qemuCaps->ngicCapabilities; i++) {
@@ -5640,7 +5670,11 @@
 virQEMUCapsKVMUsable(virQEMUCapsCachePriv *priv)
 {
     struct stat sb;
+#if defined(__DragonFly__)
+    static const char *kvm_device = "/dev/nvmm";
+#else
     static const char *kvm_device = "/dev/kvm";
+#endif
     virTristateBool value;
     virTristateBool cached_value = priv->kvmUsable;
     time_t kvm_ctime;
@@ -5692,6 +5726,11 @@
     bool kvmUsable;
     struct stat sb;
     bool kvmSupportsNesting;
+#if defined(__DragonFly__)
+    const virQEMUCapsFlags kvmCap = QEMU_CAPS_NVMM;
+#else
+    const virQEMUCapsFlags kvmCap = QEMU_CAPS_KVM;
+#endif
 
     if (!qemuCaps->invalidation)
         return true;
@@ -5753,7 +5792,7 @@
 
     kvmUsable = virQEMUCapsKVMUsable(priv);
 
-    if (!virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM) &&
+    if (!virQEMUCapsGet(qemuCaps, kvmCap) &&
         kvmUsable) {
         VIR_DEBUG("KVM was not enabled when probing '%s', "
                   "but it should be usable now",
@@ -5761,7 +5800,7 @@
         return false;
     }
 
-    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM) &&
+    if (virQEMUCapsGet(qemuCaps, kvmCap) &&
         !kvmUsable) {
         VIR_DEBUG("KVM was enabled when probing '%s', "
                   "but it is not available now",
@@ -5956,6 +5995,9 @@
 
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV))
         return VIR_DOMAIN_VIRT_HYPERV;
+
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return VIR_DOMAIN_VIRT_NVMM;
 
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG))
         return VIR_DOMAIN_VIRT_QEMU;
@@ -6205,6 +6247,8 @@
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HVF);
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_MSHV))
         virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_HYPERV);
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
 
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
@@ -7543,4 +7587,5 @@
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_HVF);
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_QEMU);
     virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_HYPERV);
+    virQEMUCapsStripMachineAliasesForVirtType(qemuCaps, VIR_DOMAIN_VIRT_NVMM);
 }
