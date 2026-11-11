--- src/vtpty/UnixPty.cpp.orig
+++ src/vtpty/UnixPty.cpp
@@ -24,14 +24,14 @@
 
 #if defined(__APPLE__) || defined(__OpenBSD__)
     #include <util.h>
-#elifdef __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #include <libutil.h>
 #else
     #include <pty.h>
 #endif
 
 #include <fcntl.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     #include <utmp.h>
 #endif
 #include <sys/ioctl.h>
