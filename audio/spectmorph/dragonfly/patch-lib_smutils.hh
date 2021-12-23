--- lib/smutils.hh.intermediate	2021-12-23 10:23:42.000000000 +0000
+++ lib/smutils.hh
@@ -15,6 +15,8 @@
   #define SM_OS_LINUX
 #elif __FreeBSD__
   #define SM_OS_LINUX
+#elif __DragonFly__
+  #define SM_OS_LINUX
 #else
   #error "unsupported platform"
 #endif
