--- pci.cpp.orig	2016-09-18 20:19:21 UTC
+++ pci.cpp
@@ -217,7 +217,7 @@
     
 }
 
-#elif (defined __FreeBSD__)
+#elif (defined __FreeBSD__) || (defined __DragonFly__)
 
 #include <sys/pciio.h>
 
