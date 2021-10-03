--- src/conf/domain_conf.h.orig	2021-06-01 09:58:21 UTC
+++ src/conf/domain_conf.h
@@ -139,6 +139,7 @@ typedef enum {
     VIR_DOMAIN_VIRT_PARALLELS,
     VIR_DOMAIN_VIRT_BHYVE,
     VIR_DOMAIN_VIRT_VZ,
+    VIR_DOMAIN_VIRT_NVMM,
 
     VIR_DOMAIN_VIRT_LAST
 } virDomainVirtType;
