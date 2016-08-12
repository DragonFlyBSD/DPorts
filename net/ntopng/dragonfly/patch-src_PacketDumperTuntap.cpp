--- src/PacketDumperTuntap.cpp.orig	2016-06-27 15:12:56.000000000 +0300
+++ src/PacketDumperTuntap.cpp
@@ -127,7 +127,7 @@ int PacketDumperTuntap::openTap(char *de
 
 /* ********************************************* */
 
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 #define OPENBSD_TAPDEVICE_SIZE 32
 int PacketDumperTuntap::openTap(char *dev, /* user-definable interface name, eg. edge0 */ int mtu) {
   int i;
