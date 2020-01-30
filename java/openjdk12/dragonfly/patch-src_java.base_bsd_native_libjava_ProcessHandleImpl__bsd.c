--- src/java.base/bsd/native/libjava/ProcessHandleImpl_bsd.c.orig	2019-10-16 18:31:09 UTC
+++ src/java.base/bsd/native/libjava/ProcessHandleImpl_bsd.c
@@ -41,7 +41,7 @@
 #include <sys/resource.h>
 #include <sys/sysctl.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h> // For MAXPATHLEN
 #include <sys/user.h>  // For kinfo_proc
 #endif
@@ -66,6 +66,15 @@
 #define KI_UID         p_uid
 #define KI_START_SEC   p_ustart_sec
 #define KI_START_USEC  p_ustart_usec
+#elif defined(__DragonFly__)
+#define KERN_PROC_PROC KERN_PROC_ALL
+#define KERN_PROC_MIB  KERN_PROC
+#define KINFO_PROC_T   kinfo_proc
+#define KI_PID         kp_pid
+#define KI_PPID        kp_ppid
+#define KI_UID         kp_uid
+#define KI_START_SEC   kp_start.tv_sec
+#define KI_START_USEC  kp_start.tv_usec
 #elif defined(__FreeBSD__)
 #define KINFO_PROC_T   kinfo_proc
 #define KI_PID         ki_pid
@@ -134,7 +143,7 @@ jint os_getChildren(JNIEnv *env, jlong j
     }
 
     // Get buffer size needed to read all processes
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     u_int namelen = 6;
     int mib[6] = {CTL_KERN, KERN_PROC_MIB, KERN_PROC_ALL, 0, sizeof(struct KINFO_PROC_T), 0};
 #else
@@ -154,7 +163,7 @@ jint os_getChildren(JNIEnv *env, jlong j
         return -1;
     }
 
-#ifndef __FreeBSD__
+#if !defined( __FreeBSD__) && !defined(__DragonFly__)
     mib[5] = bufSize / sizeof(struct KINFO_PROC_T);
 #endif
 
@@ -239,7 +248,7 @@ pid_t os_getParentPidAndTimings(JNIEnv *
     size_t bufSize = sizeof kp;
 
     // Read the process info for the specific pid
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     u_int namelen = 6;
     int mib[6] = {CTL_KERN, KERN_PROC_MIB, KERN_PROC_PID, pid, bufSize, 1};
 #else
@@ -273,7 +282,7 @@ pid_t os_getParentPidAndTimings(JNIEnv *
         ppid = kp.KI_PPID;
     }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     jlong microsecs = kp.p_uutime_sec * 1000 * 1000 + kp.p_uutime_usec +
         kp.p_ustime_sec * 1000 * 1000 + kp.p_ustime_usec;
     *totalTime = microsecs * 1000;
@@ -301,7 +310,7 @@ static uid_t getUID(pid_t pid) {
     size_t bufSize = sizeof kp;
 
     // Read the process info for the specific pid
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__FreeBSD__)
     u_int namelen = 6;
     int mib[6] = {CTL_KERN, KERN_PROC_MIB, KERN_PROC_PID, pid, bufSize, 1};
 #else
