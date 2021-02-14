--- src/util.h.orig	2020-12-05 22:11:36 UTC
+++ src/util.h
@@ -32,7 +32,7 @@
 #include <vector>
 #include <map>
 #include <sys/types.h>
-#if defined(FREEBSD) || defined(OPENBSD)
+#if defined(FREEBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 #include <uuid.h>
 #else
 #include <uuid/uuid.h>
