--- Source/NSObject.m.orig	Sun Jan  8 08:41:32 2023
+++ Source/NSObject.m	Sat Nov
@@ -66,7 +66,7 @@
 #endif
 
 #if __GNUC__ >= 4
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <fenv.h>
 #endif
 #endif // __GNUC__
