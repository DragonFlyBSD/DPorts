--- src/conf/domain_conf.c.orig	2022-03-01 09:08:21 UTC
+++ src/conf/domain_conf.c
@@ -126,6 +126,7 @@ VIR_ENUM_IMPL(virDomainVirt,
               "bhyve",
               "vz",
               "hvf",
+              "nvmm"
 );
 
 VIR_ENUM_IMPL(virDomainOS,
