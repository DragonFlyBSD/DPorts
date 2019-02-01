--- src/mongo/db/repl/isself.cpp.orig	2019-01-31 22:18:52 UTC
+++ src/mongo/db/repl/isself.cpp
@@ -50,7 +50,7 @@
 #include "mongo/util/scopeguard.h"
 
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun) || \
-    defined(__OpenBSD__)
+    defined(__OpenBSD__) || defined(__DragonFly__)
 #define FASTPATH_UNIX 1
 #endif
 
@@ -63,7 +63,7 @@
 #include <ifaddrs.h>
 #include <netdb.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
