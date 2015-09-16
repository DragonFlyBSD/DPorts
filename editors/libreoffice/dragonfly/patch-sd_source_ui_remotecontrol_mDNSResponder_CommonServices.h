--- sd/source/ui/remotecontrol/mDNSResponder/CommonServices.h.orig	2015-08-22 06:41:35 UTC
+++ sd/source/ui/remotecontrol/mDNSResponder/CommonServices.h
@@ -53,7 +53,7 @@ extern "C" {
 
 // FreeBSD
 #if ( !defined( TARGET_OS_FREEBSD ) )
-    #if ( defined( __FreeBSD__ ) )
+    #if ( defined __FreeBSD__ || defined __DragonFly__)
         #define TARGET_OS_FREEBSD       1
     #else
         #define TARGET_OS_FREEBSD       0
