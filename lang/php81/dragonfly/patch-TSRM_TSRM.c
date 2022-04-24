--- TSRM/TSRM.c.orig	2022-04-13 02:45:05 UTC
+++ TSRM/TSRM.c
@@ -736,13 +736,13 @@ TSRM_API size_t tsrm_get_ls_cache_tcb_of
 #if defined(__APPLE__) && defined(__x86_64__)
     // TODO: Implement support for fast JIT ZTS code ???
 	return 0;
-#elif defined(__x86_64__) && defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__MUSL__)
+#elif defined(__x86_64__) && defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__MUSL__) && !defined(__DragonFly__)
 	size_t ret;
 
 	asm ("movq _tsrm_ls_cache@gottpoff(%%rip),%0"
           : "=r" (ret));
 	return ret;
-#elif defined(__i386__) && defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__MUSL__)
+#elif defined(__i386__) && defined(__GNUC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__MUSL__) && !defined(__DragonFly__)
 	size_t ret;
 
 	asm ("leal _tsrm_ls_cache@ntpoff,%0"
