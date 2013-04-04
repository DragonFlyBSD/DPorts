
$FreeBSD: games/uhexen/files/patch-src::h2_main.c 307656 2012-11-22 15:37:58Z danfe $

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
