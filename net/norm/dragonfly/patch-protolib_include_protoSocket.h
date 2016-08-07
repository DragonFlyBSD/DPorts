--- protolib/include/protoSocket.h.orig	2015-02-06 00:47:50.000000000 +0200
+++ protolib/include/protoSocket.h
@@ -94,7 +94,7 @@ class ProtoSocket
 // On Mac OSX, only version 10.7 and later support IGMPv3 
 // and the "MCAST_JOIN_GROUP" macro definition is a "tell" for this
 // (we _reallly_ need to go to a more sophisticated build system!)
-#if (!defined(WIN32) && !defined(ANDROID) && (!defined(MACOSX))) || (defined(MACOSX) && defined(MCAST_JOIN_GROUP))
+#if (!defined(WIN32) && !defined(ANDROID) && !defined(__DragonFly__) &&(!defined(MACOSX))) || (defined(MACOSX) && defined(MCAST_JOIN_GROUP)) 
 #define _PROTOSOCKET_IGMPV3_SSM
 #endif // !WIN32 && !ANDROID && (!MACOSX || MCAST_JOIN_GROUP)
         
