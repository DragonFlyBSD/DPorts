--- src/util.h.orig	2026-08-16 19:02:36 UTC
+++ src/util.h
@@ -34,7 +34,7 @@
 
 #include <string>
 #include <vector>
-#if defined(FREEBSD) || defined(OPENBSD)
+#if defined(FREEBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 #include <uuid.h>
 #else
 #include <uuid/uuid.h>
