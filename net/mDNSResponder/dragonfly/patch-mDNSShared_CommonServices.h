--- mDNSShared/CommonServices.h.orig	2018-09-27 21:05:12 UTC
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
@@ -176,6 +186,15 @@ extern "C" {
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
@@ -439,7 +458,7 @@ typedef int socklen_t;
 // - Mac OS X when not building with BSD headers
 // - Windows
 
-#if ( !defined(_SSIZE_T) && ( TARGET_OS_WIN32 || !defined( _BSD_SSIZE_T_DEFINED_ ) ) && !TARGET_OS_FREEBSD && !TARGET_OS_LINUX && !TARGET_OS_MAC)
+#if ( !defined(_SSIZE_T) && ( TARGET_OS_WIN32 || !defined( _BSD_SSIZE_T_DEFINED_ ) ) && !TARGET_OS_FREEBSD && !TARGET_OS_LINUX && !TARGET_OS_MAC && !TARGET_OS_DRAGONFLY)
 typedef int ssize_t;
 #endif
 
