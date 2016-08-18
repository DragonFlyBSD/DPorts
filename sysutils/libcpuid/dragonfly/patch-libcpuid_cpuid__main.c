--- libcpuid/cpuid_main.c.intermediate	2016-08-18 07:39:29 UTC
+++ libcpuid/cpuid_main.c
@@ -125,7 +125,7 @@ static int get_total_cpus(void)
 #define GET_TOTAL_CPUS_DEFINED
 #endif
 
-#if defined __FreeBSD__ || defined __OpenBSD__ || defined __NetBSD__ || defined __bsdi__ || defined __QNX__
+#if defined __FreeBSD__ || defined __OpenBSD__ || defined __NetBSD__ || defined __bsdi__ || defined __QNX__ || defined __DragonFly__
 #include <sys/types.h>
 #include <sys/sysctl.h>
 
