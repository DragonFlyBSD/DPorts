For strlen(), strcpy(), strcmp(), strn*(), strdup() visibility.

--- lib/Xm/XpmI.h.orig	2017-08-17 00:38:43 UTC
+++ lib/Xm/XpmI.h
@@ -129,7 +129,7 @@ extern "C" {
 extern FILE *popen();
 #endif
 
-#if defined(SYSV) || defined(SVR4) || defined(VMS) || defined(WIN32) || defined (_SVID_SOURCE)
+#if defined(SYSV) || defined(SVR4) || defined(VMS) || defined(WIN32) || defined (_SVID_SOURCE) || defined(__DragonFly__)
 #include <string.h>
 
 #ifndef index
