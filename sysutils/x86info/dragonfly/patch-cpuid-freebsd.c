--- cpuid-freebsd.c.orig	2018-03-23 17:27:42 UTC
+++ cpuid-freebsd.c
@@ -5,19 +5,42 @@
  *  Originally submitted by Stanislav Sedov <stas@FreeBSD.org>
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/param.h>
 #include <sys/fcntl.h>
 #include <sys/ioctl.h>
 #include <sys/cpuctl.h>
+#ifdef __DragonFly__
+#include <sched.h>
+#include <string.h>
+#else
 #include <sys/cpuset.h>
+#endif
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 
 #include <x86info.h>
 
+#ifdef __DragonFly__
+void bind_cpu(unsigned int cpunr)
+{
+	int ret;
+	cpu_set_t set;
+	cpu_set_t tmp_set;
+
+	ret = sched_getaffinity(getpid(), sizeof(set), &set);
+	if (ret)
+		return;
+
+	memcpy(&tmp_set, &set, sizeof(cpu_set_t));
+	CPU_ZERO(&set);
+	CPU_SET(cpunr, &set);
+	sched_setaffinity(getpid(), sizeof(set), &set);
+	return;
+}
+#else
 void bind_cpu(unsigned int cpunr)
 {
 	cpuset_t mask;
@@ -27,6 +50,7 @@ void bind_cpu(unsigned int cpunr)
 	(void) cpuset_setaffinity(CPU_LEVEL_WHICH, CPU_WHICH_PID, -1,
 	    sizeof(mask), &mask);
 }
+#endif
 
 static const char *NATIVE_CPUID_FAILED_MSG = "WARNING: Native cpuid failed\n";
 
@@ -61,10 +85,14 @@ void cpuid(unsigned int CPU_number, unsi
 		if (ebx!=0)	*ebx = args.data[1];
 		if (ecx!=0)	*ecx = args.data[2];
 		if (edx!=0)	*edx = args.data[3];
+#ifdef __DragonFly__
+		close(fh);
+#else
 		if (close(fh) == -1) {
 			perror("close");
 			exit(EXIT_FAILURE);
 		}
+#endif
 	} else {
 		/* Something went wrong, just do UP and hope for the best. */
 		nodriver = 1;
