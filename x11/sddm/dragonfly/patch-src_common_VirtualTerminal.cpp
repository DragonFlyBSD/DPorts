--- src/common/VirtualTerminal.cpp.orig
+++ src/common/VirtualTerminal.cpp
@@ -27,7 +27,7 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <signal.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/consio.h>
 #include <termios.h>
 #else
@@ -43,7 +43,7 @@
 
 namespace SDDM {
     namespace VirtualTerminal {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         const char *defaultVtPath = "/dev/ttyv0";
 
         QString path(int vt) {
