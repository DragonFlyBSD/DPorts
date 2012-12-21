--- os.h.intermediate	2012-12-22 00:10:21.000000000 +0100
+++ os.h	2012-12-22 00:12:45.000000000 +0100
@@ -260,13 +260,18 @@
 #endif
 
 #if defined(UTMPOK) || defined(BUGGYGETLOGIN)
-# if defined(SVR4) && !defined(DGUX) && !defined(__hpux) && !defined(linux)
+# if (defined(SVR4) && !defined(DGUX) && !defined(__hpux) && !defined(linux)) || \
+      defined(__DragonFly__)
 #  include <utmpx.h>
-#  ifdef UTMPX_FILE
-#   define UTMPFILE	UTMPX_FILE
+#  if defined(__DragonFly__)
+#    define UTMPFILE	_PATH_UTMPX
 #  else
-#   define UTMPFILE	"/nonexistent"
-#  endif
+#    ifdef UTMPX_FILE
+#      define UTMPFILE	UTMPX_FILE
+#    else
+#      define UTMPFILE	"/nonexistent"
+#    endif
+#  endif /* __DragonFly__ */
 #  define utmp		utmpx
 #  define getutent	getutxent
 #  define getutid	getutxid
