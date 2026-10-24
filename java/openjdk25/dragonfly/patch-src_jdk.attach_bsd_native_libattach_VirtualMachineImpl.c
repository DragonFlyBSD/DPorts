--- src/jdk.attach/bsd/native/libattach/VirtualMachineImpl.c.orig	2026-04-22 18:05:58 UTC
+++ src/jdk.attach/bsd/native/libattach/VirtualMachineImpl.c
@@ -48,11 +48,16 @@
 #define KINFO_PROC_T   kinfo_proc
 #define KI_SIGIGNORE   p_sigignore
 #define KI_SIGCATCH    p_sigcatch
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define KERN_PROC_MIB  KERN_PROC
 #define KINFO_PROC_T   kinfo_proc
+#ifdef __DragonFly__
+#define KI_SIGIGNORE   kp_sigignore
+#define KI_SIGCATCH    kp_sigcatch
+#else
 #define KI_SIGIGNORE   ki_sigignore
 #define KI_SIGCATCH    ki_sigcatch
+#endif
 #elif defined(__NetBSD__)
 #define KERN_PROC_MIB  KERN_PROC2
 #define KINFO_PROC_T   kinfo_proc2
@@ -138,7 +143,7 @@ JNIEXPORT jboolean JNICALL Java_sun_tools_attach_Virtu
 {
     struct KINFO_PROC_T kiproc;
     size_t            kipsz = sizeof(struct KINFO_PROC_T);
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     int mib[] = {CTL_KERN, KERN_PROC_MIB, KERN_PROC_PID, (int)pid, (int)kipsz, 1};
 #else
     int mib[] = { CTL_KERN, KERN_PROC_MIB, KERN_PROC_PID, (int)pid };
