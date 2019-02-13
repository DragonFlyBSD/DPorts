--- src/iroffer_defines.h.orig	2005-12-13 04:57:56.000000000 +0200
+++ src/iroffer_defines.h
@@ -203,6 +203,7 @@
     defined(_OS_NetBSD)      || \
     defined(_OS_BSDI)        || \
     defined(_OS_BSD_OS)      || \
+    defined(_OS_DragonFly)   || \
     defined(_OS_Darwin)
 #define _OS_BSD_ANY
 
