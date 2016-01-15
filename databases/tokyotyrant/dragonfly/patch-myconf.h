--- myconf.h.orig	2010-08-05 09:24:33.000000000 +0300
+++ myconf.h
@@ -84,6 +84,11 @@
 #define _SYS_CYGWIN_
 #define TTSYSNAME   "Windows (Cygwin)"
 
+#elif defined(__DragonFly__)
+
+#define _SYS_DRAGONFLY_
+#define TTSYSNAME   "DragonFly BSD"
+
 #else
 
 #define _SYS_GENERIC_
@@ -92,7 +97,7 @@
 #endif
 
 #if !defined(_SYS_LINUX_) && !defined(_SYS_FREEBSD_) && !defined(_SYS_MACOSX_) && \
-  !defined(_SYS_SUNOS_)
+  !defined(_SYS_SUNOS_) && !defined(_SYS_DRAGONFLY_)
 #error =======================================
 #error Your platform is not supported.  Sorry.
 #error =======================================
@@ -215,7 +220,7 @@
 #include <tctdb.h>
 #include <tcadb.h>
 
-#if defined(_SYS_FREEBSD_) || defined(_SYS_MACOSX_)
+#if defined(_SYS_DRAGONFLY_) || defined(_SYS_FREEBSD_) || defined(_SYS_MACOSX_)
 #define TTUSEKQUEUE    1
 #elif defined(_SYS_SUNOS_)
 
@@ -242,7 +247,7 @@ typedef struct { int portev_object; } po
  *************************************************************************************************/
 
 
-#if defined(_SYS_FREEBSD_) || defined(_SYS_NETBSD_) || defined(_SYS_OPENBSD_)
+#if defined(_SYS_DRAGONFLY_) || defined(_SYS_FREEBSD_) || defined(_SYS_NETBSD_) || defined(_SYS_OPENBSD_)
 #define nan(TC_a)      strtod("nan", NULL)
 #define nanl(TC_a)     ((long double)strtod("nan", NULL))
 #endif
