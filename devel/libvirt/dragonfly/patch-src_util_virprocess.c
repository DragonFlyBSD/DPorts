--- src/util/virprocess.c.orig	2026-10-01 09:02:52 UTC
+++ src/util/virprocess.c
@@ -39,6 +39,21 @@
 # include <sched.h>
 #endif
 
+#if defined(__DragonFly__) && !defined(CPU_ALLOC)
+/* DragonFly's cpu_set_t is fixed-size and there is no CPU_ALLOC(). */
+# define CPU_ALLOC_SIZE(count) sizeof(cpu_set_t)
+# define CPU_ALLOC(count) g_new0(cpu_set_t, 1)
+# define CPU_FREE(set) g_free(set)
+# define CPU_ZERO_S(size, set) CPU_ZERO(set)
+# define CPU_SET_S(cpu, size, set) \
+    do { \
+        if ((size_t)(cpu) < (size_t)CPU_SETSIZE) \
+            CPU_SET(cpu, set); \
+    } while (0)
+# define CPU_ISSET_S(cpu, size, set) \
+    ((size_t)(cpu) < (size_t)CPU_SETSIZE && CPU_ISSET(cpu, set))
+#endif
+
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || WITH_BSD_CPU_AFFINITY || defined(__APPLE__)
 # include <sys/param.h>
 #endif
