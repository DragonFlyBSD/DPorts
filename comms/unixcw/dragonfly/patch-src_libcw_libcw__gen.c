--- src/libcw/libcw_gen.c.orig
+++ src/libcw/libcw_gen.c
@@ -2990,7 +2990,7 @@
 	tone.forever = true;
 	int rv = cw_tq_enqueue_internal(gen->tq, &tone);
 
-#ifdef __FreeBSD__  /* Tested on FreeBSD 10. */
+#if defined(__FreeBSD__) || defined(__DragonFly__)  /* Tested on FreeBSD 10. */
 	/* Separate path for FreeBSD because for some reason signals
 	   badly interfere with value returned through second arg to
 	   nanolseep().  Try to run the section in #else under FreeBSD
