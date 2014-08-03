
$FreeBSD: head/mail/exim/files/patch-src__auths__call_radius.c 363362 2014-07-29 17:12:47Z adamw $

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
 
 
