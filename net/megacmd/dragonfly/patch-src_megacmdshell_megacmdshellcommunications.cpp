--- src/megacmdshell/megacmdshellcommunications.cpp.orig	2018-09-27 07:53:46 UTC
+++ src/megacmdshell/megacmdshellcommunications.cpp
@@ -52,7 +52,7 @@
 #include <limits.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
