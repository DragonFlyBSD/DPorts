--- qcommon/qcommon.h.orig	2006-12-31 19:01:34.000000000 +0200
+++ qcommon/qcommon.h
@@ -50,6 +50,8 @@ Foundation, Inc., 59 Temple Place - Suit
 
 #if defined __FreeBSD__
 #define BUILDSTRING "FreeBSD"
+#elif defined __DragonFly__
+#define BUILDSTRING "DragonFly"
 #else
 #define BUILDSTRING "Linux"
 #endif
