--- tests/dispatch_workqueue.c.intermediate	2022-11-07 10:43:31 UTC
+++ tests/dispatch_workqueue.c
@@ -33,7 +33,7 @@
 activecpu(void)
 {
         uint32_t activecpu;
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
         activecpu = (uint32_t)sysconf(_SC_NPROCESSORS_ONLN);
 #elif defined(_WIN32)
         SYSTEM_INFO si;
