--- tnftpd.h.orig	2015-12-02 23:37:17.617741000 +0100
+++ tnftpd.h	2015-12-02 23:37:51.558062000 +0100
@@ -117,10 +117,10 @@
 #if defined(HAVE_TERMIOS_H)
 # include <termios.h>
 #endif
-#if defined(HAVE_UTMP_H)
-# include <utmp.h>
-#else
+#if defined(HAVE_UTMPX_H)
 # include <utmpx.h>
+#elif defined(HAVE_UTMP_H)
+# include <utmp.h>
 #endif
 
 #if defined(HAVE_POLL)
