$FreeBSD: ports/audio/trommler/files/patch-gui.c,v 1.2 2012/11/17 05:54:46 svnexp Exp $

--- gui.c.orig	Thu Feb 20 15:43:08 2003
+++ gui.c	Thu Feb 20 15:43:21 2003
@@ -2261,7 +2261,6 @@
     }
     else
     {
-        getcwd(Global.DrumDir,sizeof(Global.DrumDir));
         strncat(Global.DrumDir,"/Drums",sizeof(Global.DrumDir) );
     }
     
