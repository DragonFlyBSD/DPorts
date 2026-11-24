--- src/qcommon/qcommon.h.orig
+++ src/qcommon/qcommon.h
@@ -34,7 +34,7 @@
 
 #if defined __unix__
 
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #define BUILDSTRING "FreeBSD"
 #else
 #define BUILDSTRING "Linux"
