--- src/openrct2/Version.h.orig
+++ src/openrct2/Version.h
@@ -60,6 +60,9 @@
 #ifdef __FreeBSD__
     #define OPENRCT2_PLATFORM "FreeBSD"
 #endif
+#ifdef __DragonFly__
+    #define OPENRCT2_PLATFORM "DragonFly"
+#endif
 #ifdef __NetBSD__
     #define OPENRCT2_PLATFORM "NetBSD"
 #endif
