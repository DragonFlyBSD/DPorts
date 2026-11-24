--- include/CSFML/Config.h.orig
+++ include/CSFML/Config.h
@@ -68,7 +68,7 @@
 // MacOS
 #define CSFML_SYSTEM_MACOS
 
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 
 // FreeBSD
 #define CSFML_SYSTEM_FREEBSD
