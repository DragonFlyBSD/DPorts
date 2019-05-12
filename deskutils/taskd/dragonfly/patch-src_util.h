--- src/util.h.orig	2015-05-10 21:35:22 UTC
+++ src/util.h
@@ -29,7 +29,7 @@
 
 #include <string>
 #include <vector>
-#ifdef FREEBSD
+#if defined(FREEBSD) || defined(DRAGONFLY)
 #include <uuid.h>
 #else
 #include <uuid/uuid.h>
