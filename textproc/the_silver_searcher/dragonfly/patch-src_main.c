--- src/main.c.orig
+++ src/main.c
@@ -154,6 +154,8 @@
             if (opts.use_thread_affinity) {
 #ifdef __linux__
                 cpu_set_t cpu_set;
+#elif __DragonFly__
+                cpu_set_t cpu_set;
 #elif __FreeBSD__
                 cpuset_t cpu_set;
 #endif
