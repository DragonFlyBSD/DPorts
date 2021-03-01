--- include/atalk/standards.h.orig	2014-12-11 11:27:44 UTC
+++ include/atalk/standards.h
@@ -19,7 +19,7 @@
 #include "config.h"
 #endif
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 # ifndef _XOPEN_SOURCE
 #  define _XOPEN_SOURCE 600
 # endif
