--- os.h.orig	2025-11-22 20:19:04.142387000 +0100
+++ os.h	2025-11-22 20:19:16.132465000 +0100
@@ -250,7 +250,7 @@ extern int errno;
 #endif
 
 #if defined(UTMPOK) || defined(BUGGYGETLOGIN)
-# if (defined(SVR4) && !defined(DGUX) && !defined(__hpux) && !defined(linux)) || defined(__FreeBSD_version)
+# if (defined(SVR4) && !defined(DGUX) && !defined(__hpux) && !defined(linux)) || defined(__FreeBSD_version) || defined(__DragonFly__)
 #  include <utmpx.h>
 #  ifdef UTMPX_FILE /* GNU extension */
 #   define UTMPFILE	UTMPX_FILE
