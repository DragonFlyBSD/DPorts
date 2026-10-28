--- src/fts-backend-xapian-functions.cpp.orig
+++ src/fts-backend-xapian-functions.cpp
@@ -19,7 +19,7 @@
 	if(l<1)
 	{
 		if(verbose>1) syslog(LOG_WARNING,"FTS Xapian: Memory limit not available from getrlimit (probably vsz_limit not set");
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
 		u_int page_size;
 		size_t uint_size = sizeof(page_size);
 		sysctlbyname("vm.stats.vm.v_page_size", &page_size, &uint_size, NULL, 0);
