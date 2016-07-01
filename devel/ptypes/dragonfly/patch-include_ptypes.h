Even on archlinux (gcc v6) it needs (__GNUC__ == 6) check
so just adding OS check

--- include/ptypes.h.orig	2007-06-27 16:05:49.000000000 +0300
+++ include/ptypes.h
@@ -42,7 +42,7 @@ template <class T> inline T* tpexchange(
     { return (T*)pexchange((void**)target, (void*)value); }
 
 
-#if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 3)) || (__GNUC__ == 4) || defined(__hpux)
+#if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 3)) || (__GNUC__ == 4) || defined(__hpux) || defined(__DragonFly__)
 #  define VARIANT_TYPECAST_HACK
 #endif
 
