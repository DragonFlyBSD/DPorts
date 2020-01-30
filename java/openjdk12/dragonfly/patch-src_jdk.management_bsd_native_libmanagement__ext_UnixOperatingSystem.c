--- src/jdk.management/bsd/native/libmanagement_ext/UnixOperatingSystem.c.orig	2019-10-16 18:31:09 UTC
+++ src/jdk.management/bsd/native/libmanagement_ext/UnixOperatingSystem.c
@@ -40,7 +40,7 @@ JNIEXPORT jdouble JNICALL
 Java_com_sun_management_internal_OperatingSystemImpl_getSystemCpuLoad0
 (JNIEnv *env, jobject dummy)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     /* This is based on the MacOS X implementation */
 
     static jlong last_used  = 0;
@@ -94,7 +94,7 @@ JNIEXPORT jdouble JNICALL
 Java_com_sun_management_internal_OperatingSystemImpl_getProcessCpuLoad0
 (JNIEnv *env, jobject dummy)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     /* This is based on the MacOS X implementation */
 
     static jlong last_task_time = 0;
@@ -120,8 +120,13 @@ Java_com_sun_management_internal_Operati
 
     jint ncpus      = JVM_ActiveProcessorCount();
     jlong time      = TIME_VALUE_TO_MICROSECONDS(now) * ncpus;
+#ifdef __DragonFly__
+    jlong task_time = TIME_VALUE_TO_MICROSECONDS(kp.kp_ru.ru_utime) +
+                      TIME_VALUE_TO_MICROSECONDS(kp.kp_ru.ru_stime);
+#else
     jlong task_time = TIME_VALUE_TO_MICROSECONDS(kp.ki_rusage.ru_utime) +
                       TIME_VALUE_TO_MICROSECONDS(kp.ki_rusage.ru_stime);
+#endif
 
     if ((last_task_time == 0) || (last_time == 0)) {
         // First call, just set the last values.
