
$FreeBSD: mail/exim/files/patch-src::auths::call_radius.c 300896 2012-07-14 13:54:48Z beat $

--- src/auths/call_radius.c
+++ src/auths/call_radius.c
@@ -38,7 +38,11 @@
   #if !defined(RADIUS_LIB_RADIUSCLIENT) && !defined(RADIUS_LIB_RADIUSCLIENTNEW)
   #define RADIUS_LIB_RADIUSCLIENT
   #endif
+  #if !defined(RADIUS_LIB_RADIUSCLIENTNEW)
   #include <radiusclient.h>
+  #else
+  #include <radiusclient-ng.h>
+  #endif
 #endif
 
 
