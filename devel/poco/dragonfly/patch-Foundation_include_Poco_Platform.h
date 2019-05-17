--- Foundation/include/Poco/Platform.h.orig	2018-03-08 14:28:42 UTC
+++ Foundation/include/Poco/Platform.h
@@ -45,7 +45,7 @@
 #define POCO_OS_VMS           0x2001
 
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	#define POCO_OS_FAMILY_UNIX 1
 	#define POCO_OS_FAMILY_BSD 1
 	#define POCO_OS POCO_OS_FREE_BSD
