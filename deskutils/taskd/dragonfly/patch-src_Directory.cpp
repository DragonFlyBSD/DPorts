--- src/Directory.cpp.orig	2019-05-12 17:35:47 UTC
+++ src/Directory.cpp
@@ -34,7 +34,7 @@
 #include <stdlib.h>
 #include <Directory.h>
 
-#if defined SOLARIS || defined NETBSD || defined FREEBSD
+#if defined SOLARIS || defined NETBSD || defined FREEBSD || defined DRAGONFLY
 #include <limits.h>
 #endif
 
