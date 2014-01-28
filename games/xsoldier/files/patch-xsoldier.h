
$FreeBSD: games/xsoldier/files/patch-xsoldier.h 340725 2014-01-22 17:40:44Z mat $

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
