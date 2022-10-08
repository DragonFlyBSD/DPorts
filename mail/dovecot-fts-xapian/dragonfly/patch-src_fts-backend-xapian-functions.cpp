--- src/fts-backend-xapian-functions.cpp.orig	2022-03-05 15:49:44 UTC
+++ src/fts-backend-xapian-functions.cpp
@@ -517,7 +517,7 @@ static long fts_backend_xapian_get_free_
 
 	if((l2>0) && ((limit>l2) || (limit<1))) limit=l2;
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)	
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)	
 	uint32_t m;
 	size_t len = sizeof(m);
 	sysctlbyname("vm.stats.vm.v_free_count", &m, &len, NULL, 0);
