--- libAfterBase/selfdiag.c.orig	2013-05-01 13:34:11 UTC
+++ libAfterBase/selfdiag.c
@@ -62,7 +62,9 @@
 struct sigcontext;							   /* just in case for easier portability */
 #endif
 
-
+#ifdef __DragonFly__
+void *_DYNAMIC;
+#endif
 
 typedef struct proc_tables
 {
