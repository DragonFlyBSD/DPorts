--- utils.h.orig	2012-04-19 19:06:51.000000000 +0000
+++ utils.h
@@ -33,7 +33,8 @@
 #if defined(__NetBSD__)
 #  define INDEX_TO_UDATA(X) (X)
 #  define UDATA_TO_INDEX(X) (X)
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__) \
+   || defined(__DragonFly__)
 #  define INDEX_TO_UDATA(X) ((void *)(uintptr_t)X)
 #  define UDATA_TO_INDEX(X) ((uintptr_t)X)
 #else
