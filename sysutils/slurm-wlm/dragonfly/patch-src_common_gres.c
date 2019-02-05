--- src/common/gres.c.orig	2018-05-30 18:31:06 UTC
+++ src/common/gres.c
@@ -62,6 +62,9 @@ typedef cpuset_t cpu_set_t;
 #define CPU_ZERO(c) cpuset_zero(*(c))
 #define CPU_ISSET(i,c) cpuset_isset((i),*(c))
 #define sched_getaffinity sched_getaffinity_np
+#endif
+
+#if defined(__NetBSD__) || defined(__DragonFly__)
 #define SCHED_GETAFFINITY_THREE_ARGS
 #endif
 
@@ -5560,9 +5563,11 @@ extern uint64_t gres_plugin_step_count(L
  * which are available from the CPUs current allocated to this process */
 static bitstr_t * _get_usable_gres(int context_inx)
 {
-#ifdef __NetBSD__
+#if defined(__NetBSD__)
 	// On NetBSD, cpuset_t is an opaque data type
 	cpuset_t *mask = cpuset_create();
+#elif defined(__DragonFly__)
+	cpuset_t mask;
 #else
 	cpu_set_t mask;
 #endif
