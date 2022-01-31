--- TSRM/TSRM.c.orig	2021-12-15 02:00:45 UTC
+++ TSRM/TSRM.c
@@ -729,7 +729,7 @@ TSRM_API size_t tsrm_get_ls_cache_tcb_of
 #if defined(__APPLE__) && defined(__x86_64__)
     // TODO: Implement support for fast JIT ZTS code ???
 	return 0;
-#elif defined(__x86_64__) && defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#elif defined(__x86_64__) && defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 	size_t ret;
 
 	asm ("movq _tsrm_ls_cache@gottpoff(%%rip),%0"
