--- umem.c.orig	2009-03-06 02:56:48.000000000 +0200
+++ umem.c
@@ -518,7 +518,7 @@ umem_log_header_t *umem_failure_log;
 umem_log_header_t *umem_slab_log;
 
 extern thread_t _thr_self(void);
-#if defined(__MACH__) || defined(__FreeBSD__)
+#if defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # define CPUHINT()	((int)(_thr_self()))
 #endif
 
