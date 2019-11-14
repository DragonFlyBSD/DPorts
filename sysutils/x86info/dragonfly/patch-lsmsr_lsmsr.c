--- lsmsr/lsmsr.c.intermediate	2019-11-13 21:26:59.000000000 +0000
+++ lsmsr/lsmsr.c
@@ -34,16 +34,11 @@
 #include "AMD_fam15h.h"
 #include "generic_msr.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/param.h>
 # include <sys/ioctl.h>
-# if __FreeBSD_version < 701102
-#  define CPUDEV "/dev/cpu%d"
-#  include <cpu.h>
-# else
-#  define CPUDEV "/dev/cpuctl%d"
-#  include <sys/cpuctl.h>
-# endif
+# include <sys/cpuctl.h>
+# define CPUDEV "/dev/cpuctl%d"
 #endif
 
 /* Todos:
@@ -131,22 +126,14 @@ static void version(void)
 	fprintf(stdout, "%s version %s\n", g.prog, LSMSR_VERSION);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 static int get_msr_val(unsigned int msr, unsigned long long *val)
 {
-#if __FreeBSD_version < 701102
-	cpu_msr_args_t args;
-#else   
 	cpuctl_msr_args_t args;
-#endif
 
 	args.msr = msr;
-#if __FreeBSD_version < 701102
-	if (ioctl(g.fd, CPU_RDMSR, &args) != 0) {
-#else
 	if (ioctl(g.fd, CPUCTL_RDMSR, &args) != 0) {
-#endif
 		fflush(stdout);
 		fprintf(stderr,
 			"could not read MSR 0x%8.8x (%s): %s\n",
@@ -189,7 +176,7 @@ static int open_dev(int cpu)
 {
 	char s[20];
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	snprintf(s, sizeof(s), CPUDEV, cpu);
 #else
 	snprintf(s, sizeof(s), "/dev/cpu/%d/msr", cpu);
