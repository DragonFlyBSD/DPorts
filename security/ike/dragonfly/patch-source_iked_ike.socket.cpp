--- source/iked/ike.socket.cpp.orig	2012-12-14 08:07:26.000000000 +0200
+++ source/iked/ike.socket.cpp
@@ -482,7 +482,7 @@ long _IKED::send_ip( PACKET_IP & packet,
 bool _IKED::vnet_init()
 {
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 	kldload( "/boot/kernel/if_tap.ko" );
 	return true;
@@ -500,7 +500,7 @@ bool _IKED::vnet_get( VNET_ADAPTER ** ad
 	if( !*adapter )
 		return false;
 
-#if defined( __FreeBSD__ ) || defined( __APPLE__ )
+#if defined(__DragonFly__) || defined( __FreeBSD__ ) || defined( __APPLE__ )
 
 	// find existing device
 
