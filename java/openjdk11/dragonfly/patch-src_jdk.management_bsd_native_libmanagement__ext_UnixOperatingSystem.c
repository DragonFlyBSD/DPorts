--- src/jdk.management/bsd/native/libmanagement_ext/UnixOperatingSystem.c.orig	2020-10-23 02:17:23 UTC
+++ src/jdk.management/bsd/native/libmanagement_ext/UnixOperatingSystem.c
@@ -101,7 +101,7 @@ JNIEXPORT jdouble JNICALL
 Java_com_sun_management_internal_OperatingSystemImpl_getSystemCpuLoad0
 (JNIEnv *env, jobject dummy)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (perfInit() == 0) {
         /* This is based on the MacOS X implementation */
 
@@ -137,7 +137,7 @@ Java_com_sun_management_internal_Operati
 #endif
     // Not implemented yet
     return -1.;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     }
 #endif
 }
@@ -157,7 +157,7 @@ JNIEXPORT jdouble JNICALL
 Java_com_sun_management_internal_OperatingSystemImpl_getProcessCpuLoad0
 (JNIEnv *env, jobject dummy)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (perfInit() == 0) {
         /* This is based on the MacOS X implementation */
 
@@ -181,8 +181,13 @@ Java_com_sun_management_internal_Operati
 
         jint ncpus      = JVM_ActiveProcessorCount();
         jlong time      = TIME_VALUE_TO_MICROSECONDS(now) * ncpus;
+#ifdef __DragonFly__
+        jlong task_time = TIME_VALUE_TO_MICROSECONDS(kp.kp_ru.ru_utime) +
+                          TIME_VALUE_TO_MICROSECONDS(kp.kp_ru.ru_stime);
+#else
         jlong task_time = TIME_VALUE_TO_MICROSECONDS(kp.ki_rusage.ru_utime) +
                           TIME_VALUE_TO_MICROSECONDS(kp.ki_rusage.ru_stime);
+#endif
 
         if (counters.jvmTicks.used == 0 || counters.jvmTicks.total == 0) {
             // First call, just set the last values.
@@ -209,7 +214,7 @@ Java_com_sun_management_internal_Operati
 #endif
     // Not implemented yet
     return -1.0;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     }
 #endif
 }
