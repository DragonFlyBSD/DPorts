--- client_bw.cpp.orig	2016-09-18 20:23:33 UTC
+++ client_bw.cpp
@@ -174,7 +174,7 @@
 
 #else
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 // Linux implementation
 
 ClientBW::ClientBW() :
