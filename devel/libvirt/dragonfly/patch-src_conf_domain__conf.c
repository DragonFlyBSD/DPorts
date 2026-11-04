--- src/conf/domain_conf.c.orig	2026-10-01 09:02:52 UTC
+++ src/conf/domain_conf.c
@@ -128,6 +128,7 @@
               "bhyve",
               "vz",
               "hvf",
+              "nvmm",
 );
 
 VIR_ENUM_IMPL(virDomainOS,
