--- umem_fail.c.orig	2009-03-06 02:56:48.000000000 +0200
+++ umem_fail.c
@@ -82,7 +82,7 @@ umem_do_abort(void)
 	}
 
 	for (;;) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		sigset_t set;
 		struct sigaction sa;
 
