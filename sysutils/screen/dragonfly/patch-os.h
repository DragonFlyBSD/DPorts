--- os.h.orig	2015-08-05 16:00:47 UTC
+++ os.h
@@ -250,11 +250,8 @@ extern int errno;
 #endif
 
 #if defined(UTMPOK) || defined(BUGGYGETLOGIN)
-# if defined(SVR4) && !defined(DGUX) && !defined(__hpux)
+# if (defined(SVR4) && !defined(DGUX)) || defined(__DragonFly__)
 #  include <utmpx.h>
-#  ifdef UTMPX_FILE /* GNU extension */
-#   define UTMPFILE	UTMPX_FILE
-#  endif
 #  define utmp		utmpx
 #  define getutent	getutxent
 #  define getutid	getutxid
@@ -276,15 +273,11 @@ extern int errno;
 # endif /* apollo */
 
 # ifndef UTMPFILE
-#  ifdef UTMP_FILE
-#   define UTMPFILE	UTMP_FILE
-#  else
-#   ifdef _PATH_UTMP
-#    define UTMPFILE	_PATH_UTMP
+#   ifdef UTMPX_FILE
+#     define UTMPFILE	UTMPX_FILE
 #   else
-#    define UTMPFILE	"/etc/utmp"
-#   endif /* _PATH_UTMP */
-#  endif
+#     define UTMPFILE	_PATH_UTMPX
+#   endif
 # endif
 
 #endif /* UTMPOK || BUGGYGETLOGIN */
