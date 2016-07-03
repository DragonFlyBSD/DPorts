--- include/dtos.h.orig	2009-08-26 08:44:41.000000000 +0300
+++ include/dtos.h
@@ -1,4 +1,4 @@
-#if defined(linux) || defined(IRIX) || defined(SOLARIS) || defined(OSF1) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__NetBSD__) || defined(__sun) || defined(sun) || defined(__OpenBSD__)
+#if defined(linux) || defined(IRIX) || defined(SOLARIS) || defined(OSF1) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__NetBSD__) || defined(__sun) || defined(sun) || defined(__OpenBSD__) || defined(__DragonFly__)
 #	include "unix.h"
 #	ifdef __APPLE__
 #		define panic dt_panic
