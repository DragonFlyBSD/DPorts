--- src/analyzers/analyzerbase.h.orig	2012-12-10 08:14:05.000000000 +0000
+++ src/analyzers/analyzerbase.h
@@ -5,7 +5,7 @@
 #define ANALYZERBASE_H
 
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #endif
 
