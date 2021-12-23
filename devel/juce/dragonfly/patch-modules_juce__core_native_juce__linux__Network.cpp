--- modules/juce_core/native/juce_linux_Network.cpp.orig	2021-03-26 08:19:54 UTC
+++ modules/juce_core/native/juce_linux_Network.cpp
@@ -25,7 +25,7 @@ namespace juce
 
 void MACAddress::findAllAddresses (Array<MACAddress>& result)
 {
-#if !defined(__FreeBSD__) // TODO implement
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) // TODO implement
     auto s = socket (AF_INET, SOCK_DGRAM, 0);
 
     if (s != -1)
