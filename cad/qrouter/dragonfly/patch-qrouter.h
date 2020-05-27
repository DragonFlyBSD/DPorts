--- qrouter.h.orig	2020-02-24 21:57:27 UTC
+++ qrouter.h
@@ -40,7 +40,8 @@ typedef unsigned long  u_long;
 #endif /* _SYS_TYPES_H */
 
 /* Compare functions aren't defined in the Mac's standard library */
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+  defined(__DragonFly__)
 typedef int (*__compar_fn_t)(const void*, const void*);
 #endif
 
