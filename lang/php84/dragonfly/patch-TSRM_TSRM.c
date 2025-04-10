--- TSRM/TSRM.c.orig	Thu Apr 10 21:46:47 2025
+++ TSRM/TSRM.c	Thu Apr
@@ -778,7 +778,7 @@ TSRM_API size_t tsrm_get_ls_cache_tcb_offset(void)
 	return 0;
 #elif defined(__x86_64__) && defined(__GNUC__) && !defined(__FreeBSD__) && \
 	!defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__MUSL__) && \
-	!defined(__HAIKU__)
+	!defined(__HAIKU__) && !defined(__DragonFly__)
 	size_t ret;
 
 	asm ("movq _tsrm_ls_cache@gottpoff(%%rip),%0"
