--- carp.c.orig	2014-02-11 20:47:14 UTC
+++ carp.c
@@ -104,6 +104,8 @@ const char *thisprogname(void)
 {
 #if defined(__FreeBSD__)
 	return getprogname();
+#elif defined(__DragonFly__)
+	return getprogname();
 #elif defined(__APPLE__)
 	return getprogname();
 #elif defined(__sun__)
