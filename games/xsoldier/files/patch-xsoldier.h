
$FreeBSD: ports/games/xsoldier/files/patch-xsoldier.h,v 1.2 2012/11/17 05:57:58 svnexp Exp $

--- xsoldier.h.orig
+++ xsoldier.h
@@ -33,8 +33,8 @@
 #define WAIT 35000
 #endif /* WAIT */
 
-#define PIXMAP DATADIR "/games/xsoldier/"
-#define SCORE LOCALSTATEDIR "/games/xsoldier/"
+#define PIXMAP DATADIR "/xsoldier/"
+#define SCORE LOCALSTATEDIR "/games/"
 #define SCOREFILE "xsoldier.scores"
 
 #define MaxStage 8
