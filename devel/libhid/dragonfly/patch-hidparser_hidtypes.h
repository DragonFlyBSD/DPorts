--- hidparser/hidtypes.h.intermediate	2016-07-08 15:56:08 UTC
+++ hidparser/hidtypes.h
@@ -21,7 +21,7 @@ extern "C" {
 typedef unsigned char  uchar;
 #endif
 
-#if HPUX || __APPLE__ || __FreeBSD__
+#if HPUX || __APPLE__ || __FreeBSD__ || __DragonFly__
 typedef unsigned long  ulong;
 #endif
 
