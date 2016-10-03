--- pci.h.orig	2016-09-18 20:22:13 UTC
+++ pci.h
@@ -75,7 +75,7 @@
 #elif __APPLE__
 // This may need to change if it can be implemented for OSX
 typedef PciHandle PciHandleM;
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 typedef PciHandle PciHandleM;
 #else
 
