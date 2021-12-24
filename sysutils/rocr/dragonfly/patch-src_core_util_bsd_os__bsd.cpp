--- src/core/util/bsd/os_bsd.cpp.orig	2018-11-19 03:01:00 UTC
+++ src/core/util/bsd/os_bsd.cpp
@@ -40,7 +40,7 @@
 //
 ////////////////////////////////////////////////////////////////////////////////
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "core/util/os.h"
 
 #include <link.h>
