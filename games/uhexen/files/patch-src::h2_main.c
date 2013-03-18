
$FreeBSD: ports/games/uhexen/files/patch-src::h2_main.c,v 1.3 2012/11/22 15:41:41 svnexp Exp $

--- src/h2_main.c.orig	Tue Dec  4 18:11:47 2001
+++ src/h2_main.c	Mon Feb 10 16:56:31 2003
@@ -127,7 +127,7 @@
 static char *wadfiles[MAXWADFILES] =
 {
 	"hexen.wad",
-	"/usr/local/share/games/uhexen/hexen.wad"
+	PREFIX "/share/doom/hexen.wad"
 };
 #else
 static char *wadfiles[MAXWADFILES] =
