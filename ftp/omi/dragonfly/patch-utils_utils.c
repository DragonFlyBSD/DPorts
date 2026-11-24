--- utils/utils.c.orig
+++ utils/utils.c
@@ -31,7 +31,7 @@
 	return (mem);
 }
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 char *strndup (const char *src, int num)
 {
 	char *dst;
