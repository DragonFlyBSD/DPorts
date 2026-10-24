--- src/LinearMath/btQuickprof.cpp.orig
+++ src/LinearMath/btQuickprof.cpp
@@ -720,7 +720,7 @@
   #define BT_HAVE_TLS 1
 #elif __linux__
   #define BT_HAVE_TLS 1
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   // TODO: At the moment disabling purposely OpenBSD, albeit tls support exists but not fully functioning
   #define BT_HAVE_TLS 1
 #endif
