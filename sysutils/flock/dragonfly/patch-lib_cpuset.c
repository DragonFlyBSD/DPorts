--- lib/cpuset.c.orig	2021-02-02 15:41:37 UTC
+++ lib/cpuset.c
@@ -110,7 +110,7 @@ void cpuset_free(cpu_set_t *set)
 	CPU_FREE(set);
 }
 
-#if !HAVE_DECL_CPU_ALLOC
+#if !HAVE_DECL_CPU_ALLOC && !defined(__DragonFly__)
 /* Please, use CPU_COUNT_S() macro. This is fallback */
 int __cpuset_count_s(size_t setsize, const cpu_set_t *set)
 {
