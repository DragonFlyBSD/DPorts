--- lineak/cdromctrl.cpp.orig
+++ lineak/cdromctrl.cpp
@@ -21,7 +21,7 @@
 extern "C" {
 #include <fcntl.h>
 #include <sys/ioctl.h>
-#if defined (__FreeBSD__) || defined(__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 # include <sys/cdio.h>
 # define CDROMEJECT CDIOCEJECT /*_IO('c', 107)*/
 # define CDROMCLOSETRAY CDIOCCLOSE
@@ -216,7 +216,7 @@
    
    /** If we want to enable autoeject */   
    if (istate) {
-      #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+      #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined (__DragonFly__)
       retcode = ioctl(fp, CDIOCALLOW);
       #endif
       #if defined (__linux__)
@@ -226,7 +226,7 @@
    /** If we want to disable autoeject */
    else {
       /* disable the drives software eject again.. */
-      #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+      #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined (__DragonFly__)
       retcode = ioctl(fp, CDIOCPREVENT);
       #endif
       #if defined (__linux__)
@@ -246,7 +246,7 @@
 int cdromCtrl::getStatus() {
    int status = 0;
       /* Get the drive status */
-      #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+      #if defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined (__DragonFly__)
          lineak_core_functions::error("Get status for FreeBSD not implemented.");
       #endif
       #if defined (__linux__)
