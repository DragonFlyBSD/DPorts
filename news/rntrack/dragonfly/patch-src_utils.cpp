--- src/utils.cpp.orig	2020-04-22 12:18:41 UTC
+++ src/utils.cpp
@@ -35,7 +35,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
-#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__NetBSD__) || \
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__NetBSD__) || defined(__DragonFly__) || \
     defined (__OSX__)
     #include <stdlib.h>
 #else
