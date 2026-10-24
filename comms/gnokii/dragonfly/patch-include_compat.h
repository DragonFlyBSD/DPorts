--- include/compat.h.orig
+++ include/compat.h
@@ -251,7 +251,7 @@
 #endif
 
 /* Get rid of long defines. Use #if __unices__ */
-#define __unices__ defined(__svr4__) || defined(__FreeBSD__) || defined(__bsdi__) || defined(__MACH__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__)
+#define __unices__ defined(__svr4__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__bsdi__) || defined(__MACH__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__)
 
 /* This one is for NLS. */
 #ifdef ENABLE_NLS
