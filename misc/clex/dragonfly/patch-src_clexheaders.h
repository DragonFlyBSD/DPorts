--- src/clexheaders.h.orig	2009-01-11 21:44:35 UTC
+++ src/clexheaders.h
@@ -1,4 +1,4 @@
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 # define _XOPEN_SOURCE 600
 #endif
 
