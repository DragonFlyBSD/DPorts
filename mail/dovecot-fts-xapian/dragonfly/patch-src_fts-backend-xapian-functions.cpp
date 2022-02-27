--- src/fts-backend-xapian-functions.cpp.orig	2021-11-11 18:16:47 UTC
+++ src/fts-backend-xapian-functions.cpp
@@ -505,7 +505,7 @@ static long fts_backend_xapian_current_t
 
 static long fts_backend_xapian_get_free_memory() // KB
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	uint32_t m;
 	size_t len = sizeof(m);
 	sysctlbyname("vm.stats.vm.v_free_count", &m, &len, NULL, 0);
