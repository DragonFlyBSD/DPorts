--- EABase/include/Common/EABase/config/eaplatform.h.orig
+++ EABase/include/Common/EABase/config/eaplatform.h
@@ -430,7 +430,7 @@
 	#define EA_PLATFORM_DESKTOP 1
 
 
-#elif defined(EA_PLATFORM_BSD) || (defined(__BSD__) || defined(__FreeBSD__))
+#elif defined(EA_PLATFORM_BSD) || (defined(__BSD__) || defined(__FreeBSD__) || defined(__DragonFly__))
 	#undef  EA_PLATFORM_BSD
 	#define EA_PLATFORM_BSD 1
 	#define EA_PLATFORM_UNIX 1
