--- src/conf/domain_conf.h.orig	2022-03-01 09:08:21 UTC
+++ src/conf/domain_conf.h
@@ -140,6 +140,7 @@ typedef enum {
     VIR_DOMAIN_VIRT_BHYVE,
     VIR_DOMAIN_VIRT_VZ,
     VIR_DOMAIN_VIRT_HVF,
+    VIR_DOMAIN_VIRT_NVMM,
 
     VIR_DOMAIN_VIRT_LAST
 } virDomainVirtType;
