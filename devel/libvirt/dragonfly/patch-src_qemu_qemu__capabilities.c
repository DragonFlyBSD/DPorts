--- src/qemu/qemu_capabilities.c.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_capabilities.c
@@ -630,6 +630,10 @@ VIR_ENUM_IMPL(virQEMUCaps,
               "compat-deprecated",
               "acpi-index",
               "input-linux",
+
+	      /* 405 */
+              "nvmm",
+
     );
 
 
@@ -712,6 +716,7 @@ struct _virQEMUCaps {
 
     /* Capabilities which may differ depending on the accelerator. */
     virQEMUCapsAccel kvm;
+    virQEMUCapsAccel nvmm;
     virQEMUCapsAccel tcg;
 };
 
@@ -813,6 +818,9 @@ virQEMUCapsGetAccel(virQEMUCaps *qemuCap
     if (type == VIR_DOMAIN_VIRT_KVM)
         return &qemuCaps->kvm;
 
+    if (type == VIR_DOMAIN_VIRT_NVMM)
+      return &qemuCaps->nvmm;
+
     return &qemuCaps->tcg;
 }
 
@@ -941,6 +949,8 @@ virQEMUCapsGetMachineTypesCaps(virQEMUCa
      * take the set of machine types we probed first. */
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         accel = &qemuCaps->kvm;
+    else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        accel = &qemuCaps->nvmm;
     else
         accel = &qemuCaps->tcg;
 
@@ -1071,6 +1081,17 @@ virQEMUCapsInitGuestFromBinary(virCaps *
         }
     }
 
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM)) {
+        if (virCapabilitiesAddGuestDomain(guest,
+                                          VIR_DOMAIN_VIRT_NVMM,
+                                          NULL,
+                                          NULL,
+                                          0,
+                                          NULL) == NULL) {
+            goto cleanup;
+        }
+    }
+
     if ((ARCH_IS_X86(guestarch) || guestarch == VIR_ARCH_AARCH64))
         virCapabilitiesAddGuestFeatureWithToggle(guest, VIR_CAPS_GUEST_FEATURE_TYPE_ACPI,
                                                  true, true);
@@ -1966,6 +1987,7 @@ virQEMUCaps *virQEMUCapsNewCopy(virQEMUC
     ret->arch = qemuCaps->arch;
 
     if (virQEMUCapsAccelCopy(&ret->kvm, &qemuCaps->kvm) < 0 ||
+	virQEMUCapsAccelCopy(&ret->nvmm, &qemuCaps->nvmm) < 0 ||
         virQEMUCapsAccelCopy(&ret->tcg, &qemuCaps->tcg) < 0)
         goto error;
 
@@ -2021,6 +2043,7 @@ void virQEMUCapsDispose(void *obj)
     virSEVCapabilitiesFree(qemuCaps->sevCapabilities);
 
     virQEMUCapsAccelClear(&qemuCaps->kvm);
+    virQEMUCapsAccelClear(&qemuCaps->nvmm);
     virQEMUCapsAccelClear(&qemuCaps->tcg);
 }
 
@@ -2283,6 +2306,10 @@ virQEMUCapsIsVirtTypeSupported(virQEMUCa
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM))
         return true;
 
+    if (virtType == VIR_DOMAIN_VIRT_NVMM &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        return true;
+
     return false;
 }
 
@@ -3209,6 +3236,22 @@ virQEMUCapsProbeQMPKVMState(virQEMUCaps
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
@@ -4066,7 +4109,14 @@ virQEMUCapsLoadAccel(virQEMUCaps *qemuCa
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
@@ -4329,6 +4379,7 @@ virQEMUCapsLoadCache(virArch hostArch,
     VIR_FREE(str);
 
     if (virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_KVM) < 0 ||
+	virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_NVMM) < 0 ||
         virQEMUCapsLoadAccel(qemuCaps, ctxt, VIR_DOMAIN_VIRT_QEMU) < 0)
         goto cleanup;
 
@@ -4401,6 +4452,7 @@ virQEMUCapsLoadCache(virArch hostArch,
         goto cleanup;
 
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
+    virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virXPathBoolean("boolean(./kvmSupportsNesting)", ctxt) > 0)
@@ -4556,7 +4608,14 @@ virQEMUCapsFormatAccel(virQEMUCaps *qemu
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
@@ -4635,6 +4694,7 @@ virQEMUCapsFormatCache(virQEMUCaps *qemu
                       virArchToString(qemuCaps->arch));
 
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_KVM);
+    virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsFormatAccel(qemuCaps, &buf, VIR_DOMAIN_VIRT_QEMU);
 
     for (i = 0; i < qemuCaps->ngicCapabilities; i++) {
@@ -5243,6 +5303,8 @@ virQEMUCapsGetVirtType(virQEMUCaps *qemu
         type = VIR_DOMAIN_VIRT_KVM;
     else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG))
         type = VIR_DOMAIN_VIRT_QEMU;
+    else if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM))
+        type = VIR_DOMAIN_VIRT_NVMM;
     else
         type = VIR_DOMAIN_VIRT_NONE;
 
@@ -5295,6 +5357,10 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *q
     if (virQEMUCapsProbeQMPKVMState(qemuCaps, mon) < 0)
         return -1;
 
+    /* Some capabilities may differ depending on NVMM state */
+    if (virQEMUCapsProbeQMPNVMMState(qemuCaps, mon) < 0)
+        return -1;
+
     type = virQEMUCapsGetVirtType(qemuCaps);
     accel = virQEMUCapsGetAccel(qemuCaps, type);
 
@@ -5321,6 +5387,7 @@ virQEMUCapsInitQMPMonitor(virQEMUCaps *q
     if (virQEMUCapsProbeQMPSEVCapabilities(qemuCaps, mon) < 0)
         return -1;
 
+
     virQEMUCapsInitProcessCaps(qemuCaps);
 
     /* The following probes rely on other previously probed capabilities.
@@ -5418,8 +5485,18 @@ virQEMUCapsInitQMP(virQEMUCaps *qemuCaps
      */
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM) &&
         virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG) &&
+	virQEMUCapsInitQMPSingle(qemuCaps, libDir, runUid, runGid, true) < 0)
+      return -1;
+
+    /*
+     * If NVMM was enabled during the first probe, we need to explicitly probe
+     * for TCG capabilities by asking the same binary again and turning KVM
+     * off.
+     */
+    if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_NVMM) &&
+        virQEMUCapsGet(qemuCaps, QEMU_CAPS_TCG) &&
         virQEMUCapsInitQMPSingle(qemuCaps, libDir, runUid, runGid, true) < 0)
-        return -1;
+      return -1;
 
     return 0;
 }
@@ -5476,6 +5553,7 @@ virQEMUCapsNewForBinaryInternal(virArch
     qemuCaps->libvirtVersion = LIBVIR_VERSION_NUMBER;
 
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_KVM);
+    virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_NVMM);
     virQEMUCapsInitHostCPUModel(qemuCaps, hostArch, VIR_DOMAIN_VIRT_QEMU);
 
     if (virQEMUCapsGet(qemuCaps, QEMU_CAPS_KVM)) {
