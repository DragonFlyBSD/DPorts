--- src/common/global.h.orig	2009-05-19 23:49:34 UTC
+++ src/common/global.h
@@ -46,6 +46,7 @@
 //
 #ifndef GLOBAL_H
 #define	GLOBAL_H
+#include <math.h>	// libstdc++ #undefs min/max here; do it before the macros below
 
 // The Pixie version 
 #define	VERSION_RELEASE	2
