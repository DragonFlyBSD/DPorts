--- src/fts-xapian-plugin.h.orig	2022-03-05 15:49:44 UTC
+++ src/fts-xapian-plugin.h
@@ -16,7 +16,7 @@
 #include "module-context.h"
 #include "fts-api-private.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #if !defined(__APPLE__)
