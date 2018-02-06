--- mono/utils/mono-proclib.c.orig	2018-02-06 15:27:09 UTC
+++ mono/utils/mono-proclib.c
@@ -37,7 +37,7 @@
 #if defined(__HAIKU__)
 #include <os/kernel/OS.h>
 #endif
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || (defined(__FreeBSD__) && !defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
 #include <sys/proc.h>
 #if defined(__APPLE__)
 #include <mach/mach.h>
@@ -66,6 +66,10 @@
 #define USE_SYSCTL 1
 #endif
 
+#ifdef __DragonFly__
+#define GLIBC_HAS_CPU_COUNT
+#endif
+
 #ifdef HAVE_SCHED_GETAFFINITY
 #  ifndef GLIBC_HAS_CPU_COUNT
 static int
