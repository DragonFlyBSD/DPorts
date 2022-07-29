--- TSRM/TSRM.c.orig	2022-06-08 00:33:06 UTC
+++ TSRM/TSRM.c
@@ -737,14 +737,16 @@ TSRM_API size_t tsrm_get_ls_cache_tcb_of
     // TODO: Implement support for fast JIT ZTS code ???
 	return 0;
 #elif defined(__x86_64__) && defined(__GNUC__) && !defined(__FreeBSD__) && \
-	!defined(__OpenBSD__) && !defined(__MUSL__) && !defined(__HAIKU__)
+	!defined(__OpenBSD__) && !defined(__MUSL__) && !defined(__HAIKU__) && \
+	!defined(__DragonFly__)
 	size_t ret;
 
 	asm ("movq _tsrm_ls_cache@gottpoff(%%rip),%0"
           : "=r" (ret));
 	return ret;
 #elif defined(__i386__) && defined(__GNUC__) && !defined(__FreeBSD__) && \
-	!defined(__OpenBSD__) && !defined(__MUSL__) && !defined(__HAIKU__)
+	!defined(__OpenBSD__) && !defined(__MUSL__) && !defined(__HAIKU__) && \
+	!defined(__DragonFly__)
 	size_t ret;
 
 	asm ("leal _tsrm_ls_cache@ntpoff,%0"
