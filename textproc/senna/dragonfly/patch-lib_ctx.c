--- lib/ctx.c.orig
+++ lib/ctx.c
@@ -646,7 +646,7 @@
   void *res;
   if (!size) {
     alloc_count--;
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
     free(ptr);
     return NULL;
 #endif /* __FreeBSD__ */
