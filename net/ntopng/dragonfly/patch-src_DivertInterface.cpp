--- src/DivertInterface.cpp.orig	2016-06-27 15:12:56.000000000 +0300
+++ src/DivertInterface.cpp
@@ -21,7 +21,7 @@
 
 #include "ntop_includes.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 
 /* http://resin.csoft.net/cgi-bin/man.cgi?section=0&topic=divert */
 
