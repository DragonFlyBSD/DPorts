--- mDNSShared/CommonServices.h.intermediate	2012-12-28 17:38:29.000000000 +0100
+++ mDNSShared/CommonServices.h	2012-12-28 17:37:49.000000000 +0100
@@ -63,6 +63,17 @@
 		#define	TARGET_OS_FREEBSD		0
 	#endif
 #endif
+
+// DragonFly
+
+#if( !defined( TARGET_OS_DRAGONFLY ) )
+	#if( defined( __DragonFly__ ) )
+		#define	TARGET_OS_DRAGONFLY		1
+	#else
+		#define	TARGET_OS_DRAGONFLY		0
+	#endif
+#endif
+
 // Linux
 
 #if( !defined( TARGET_OS_LINUX ) )
@@ -99,7 +110,8 @@
 	
 	// No predefined macro for VxWorks so just assume VxWorks if nothing else is set.
 	
-	#if( !macintosh && !__MACH__  && !defined( __FreeBSD__ ) && !defined( __linux__ ) && !defined ( __SVR4 ) && !defined ( __sun ) && !defined( __PALMOS_TRAPS__ ) && !defined( __PALMOS_ARMLET__ ) && !defined( _WIN32 ) )
+	#if( !macintosh && !__MACH__  && !defined( __FreeBSD__ ) && !defined( __linux__ ) && !defined ( __SVR4 ) && !defined ( __sun ) && !defined( __PALMOS_TRAPS__ ) && !defined( __PALMOS_ARMLET__ ) && !defined( _WIN32 ) \
+	  && !defined(__DragonFly__) && !defined(__FreeBSD__))
 		#define	TARGET_OS_VXWORKS		1
 	#else
 		#define	TARGET_OS_VXWORKS		0
@@ -197,6 +209,15 @@
 	#include	<arpa/inet.h>
 	#include	<sys/socket.h>
 
+#elif( TARGET_OS_DRAGONFLY )
+
+	// FreeBSD
+	#include	<stdint.h>
+	#include	<pthread.h>
+	#include	<netinet/in.h>
+	#include	<arpa/inet.h>
+	#include	<sys/socket.h>
+
 #elif( TARGET_OS_LINUX )
 	
 	// Linux
@@ -473,7 +494,8 @@
 // - Windows
 
 #if( TARGET_LANGUAGE_C_LIKE )
-	#if( !defined(_SSIZE_T) && ( TARGET_OS_WIN32 || !defined( _BSD_SSIZE_T_DEFINED_ ) ) && !TARGET_OS_FREEBSD && !TARGET_OS_LINUX && !TARGET_OS_VXWORKS && !TARGET_OS_MAC)
+	#if( !defined(_SSIZE_T) && ( TARGET_OS_WIN32 || !defined( _BSD_SSIZE_T_DEFINED_ ) ) && !TARGET_OS_FREEBSD && !TARGET_OS_LINUX && !TARGET_OS_VXWORKS && !TARGET_OS_MAC \
+	  && !TARGET_OS_DRAGONFLY && !TARGET_OS_FREEBSD)
 		typedef int						ssize_t;
 	#endif
 #endif
