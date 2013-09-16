--- mDNSShared/CommonServices.h.orig	2011-12-02 00:39:45.000000000 +0000
+++ mDNSShared/CommonServices.h
@@ -54,6 +54,16 @@ extern "C" {
     #endif
 #endif
 
+// DragonFly
+
+#if ( !defined( TARGET_OS_DRAGONFLY ) )
+    #if ( defined( __DragonFly__ ) )
+        #define TARGET_OS_DRAGONFLY       1
+    #else
+        #define TARGET_OS_DRAGONFLY       0
+    #endif
+#endif
+
 // FreeBSD
 
 #if ( !defined( TARGET_OS_FREEBSD ) )
@@ -100,7 +110,15 @@ extern "C" {
 
 // No predefined macro for VxWorks so just assume VxWorks if nothing else is set.
 
-    #if ( !macintosh && !__MACH__  && !defined( __FreeBSD__ ) && !defined( __linux__ ) && !defined ( __SVR4 ) && !defined ( __sun ) && !defined( __PALMOS_TRAPS__ ) && !defined( __PALMOS_ARMLET__ ) && !defined( _WIN32 ) )
+    #if ( !macintosh && !__MACH__  \
+      && !defined(__DragonFly__) \
+      && !defined( __FreeBSD__ ) \
+      && !defined( __linux__ ) \
+      && !defined( __SVR4 ) \
+      && !defined( __sun ) \
+      && !defined( __PALMOS_TRAPS__ ) \
+      && !defined( __PALMOS_ARMLET__ ) \
+      && !defined( _WIN32 ) )
         #define TARGET_OS_VXWORKS       1
     #else
         #define TARGET_OS_VXWORKS       0
@@ -189,6 +207,15 @@ extern "C" {
     #include    <libkern/OSTypes.h>
     #include    <sys/types.h>
 
+#elif ( TARGET_OS_DRAGONFLY )
+
+// DragonFly
+    #include    <stdint.h>
+    #include    <pthread.h>
+    #include    <netinet/in.h>
+    #include    <arpa/inet.h>
+    #include    <sys/socket.h>
+
 #elif ( TARGET_OS_FREEBSD )
 
 // FreeBSD
@@ -474,7 +501,12 @@ typedef int socklen_t;
 // - Windows
 
 #if ( TARGET_LANGUAGE_C_LIKE )
-    #if ( !defined(_SSIZE_T) && ( TARGET_OS_WIN32 || !defined( _BSD_SSIZE_T_DEFINED_ ) ) && !TARGET_OS_FREEBSD && !TARGET_OS_LINUX && !TARGET_OS_VXWORKS && !TARGET_OS_MAC)
+    #if ( !defined(_SSIZE_T) && ( TARGET_OS_WIN32 || !defined( _BSD_SSIZE_T_DEFINED_ ) ) \
+       && !TARGET_OS_DRAGONFLY \
+       && !TARGET_OS_FREEBSD \
+       && !TARGET_OS_LINUX \
+       && !TARGET_OS_VXWORKS \
+       && !TARGET_OS_MAC)
 typedef int ssize_t;
     #endif
 #endif
