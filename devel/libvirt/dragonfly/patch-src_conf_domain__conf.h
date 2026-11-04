--- src/conf/domain_conf.h.orig	2026-10-01 09:02:52 UTC
+++ src/conf/domain_conf.h
@@ -144,6 +144,7 @@
     VIR_DOMAIN_VIRT_BHYVE,
     VIR_DOMAIN_VIRT_VZ,
     VIR_DOMAIN_VIRT_HVF,
+    VIR_DOMAIN_VIRT_NVMM,
 
     VIR_DOMAIN_VIRT_LAST
 } virDomainVirtType;
