--- src/main.cpp.orig	2016-06-27 15:12:56.000000000 +0300
+++ src/main.cpp
@@ -169,7 +169,7 @@ int main(int argc, char *argv[])
           iface = new NetfilterInterface(ifName);
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
         if(iface == NULL && strncmp(ifName, "divert:", 7) == 0)
           iface = new DivertInterface(ifName);
 #endif
