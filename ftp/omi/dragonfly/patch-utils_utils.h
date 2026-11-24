--- utils/utils.h.orig
+++ utils/utils.h
@@ -42,7 +42,7 @@
  *   allocated.
  */
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 char *strndup (const char *src, int num);
 /*
  *   Like strdup(), but limits the string length to at most
