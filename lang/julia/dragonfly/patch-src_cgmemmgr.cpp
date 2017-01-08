--- src/cgmemmgr.cpp.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/cgmemmgr.cpp
@@ -25,7 +25,7 @@
 #    define MAP_ANONYMOUS MAP_ANON
 #  endif
 #endif
-#ifdef _OS_FREEBSD_
+#if defined(_OS_FREEBSD_) || defined(_OS_DRAGONFLY_)
 #  include <sys/types.h>
 #endif
 
