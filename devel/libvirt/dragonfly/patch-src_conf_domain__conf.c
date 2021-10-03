--- src/conf/domain_conf.c.orig	2021-06-01 09:58:21 UTC
+++ src/conf/domain_conf.c
@@ -125,6 +125,7 @@ VIR_ENUM_IMPL(virDomainVirt,
               "parallels",
               "bhyve",
               "vz",
+              "nvmm"
 );
 
 VIR_ENUM_IMPL(virDomainOS,
