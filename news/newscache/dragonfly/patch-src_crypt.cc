--- src/crypt.cc.orig	2003-01-21 08:59:29 UTC
+++ src/crypt.cc
@@ -1,4 +1,4 @@
-#if !(defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__))
+#if !(defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__))
 #include <crypt.h>
 #endif
 #include <stdlib.h>
