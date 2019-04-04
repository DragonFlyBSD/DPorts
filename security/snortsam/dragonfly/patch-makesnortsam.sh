--- makesnortsam.sh.orig	2009-11-27 01:57:00 UTC
+++ makesnortsam.sh
@@ -23,7 +23,8 @@
 # snortsam
 SSP_GENERIC_SRC="snortsam.c twofish.c ssp_ciscoacl.c ssp_cisco_nullroute.c ssp_cisco_nullroute2.c ssp_email.c ssp_forward.c ssp_fwexec.c ssp_fwsam.c ssp_netscreen.c ssp_opsec.c ssp_pix.c ssp_snmp_interface_down.c ssp_wgrd.c"
 
-systype=`uname`
+#systype=`uname`
+systype=FreeBSD
 SNORTSAM=../snortsam
 SAMTOOL=../samtool
 
