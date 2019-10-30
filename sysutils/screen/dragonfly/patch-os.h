--- os.h.intermediate	2019-10-30 09:38:11 UTC
+++ os.h
@@ -250,11 +250,14 @@ extern int errno;
 #endif
 
 #if defined(UTMPOK) || defined(BUGGYGETLOGIN)
-# if (defined(SVR4) && !defined(DGUX) && !defined(__hpux) && !defined(linux)) || defined(__FreeBSD_version)
+# if (defined(SVR4) && !defined(DGUX) && !defined(__hpux) && !defined(linux)) || defined(__FreeBSD_version) || defined(__DragonFly__)
 #  include <utmpx.h>
 #  ifdef UTMPX_FILE /* GNU extension */
 #   define UTMPFILE	UTMPX_FILE
 #  endif
+#  ifndef UTMPFILE
+#   define UTMPFILE	_PATH_UTMPX
+#  endif
 #  define utmp		utmpx
 #  define getutent	getutxent
 #  define getutid	getutxid
