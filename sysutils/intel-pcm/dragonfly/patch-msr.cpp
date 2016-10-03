--- msr.cpp.orig	2016-09-18 20:21:51 UTC
+++ msr.cpp
@@ -161,7 +161,7 @@
     return driver->decrementNumInstances();
 }
 
-#elif (defined __FreeBSD__)
+#elif (defined __FreeBSD__) || (defined __DragonFly__)
 
 #include <sys/ioccom.h>
 #include <sys/cpuctl.h>
