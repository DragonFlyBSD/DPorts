
$FreeBSD: ports/games/xsoldier/files/patch-opening.c,v 1.2 2012/11/17 05:57:58 svnexp Exp $

--- opening.c.orig
+++ opening.c
@@ -95,10 +95,10 @@
 	    {
 		draw_string(120, 330+i*25, player->Rec[i].name,
                             strlen(player->Rec[i].name));
-		sprintf(buff,"%2d-%2d",player->Rec[i].loop,
+		snprintf(buff, sizeof(buff), "%2d-%2d",player->Rec[i].loop,
                         player->Rec[i].stage);
 		draw_string(270, 330+i*25, buff, strlen(buff));
-		sprintf(buff,"%8d",player->Rec[i].score);
+		snprintf(buff, sizeof(buff), "%8d",player->Rec[i].score);
 		draw_string(350, 330+i*25, buff, strlen(buff));
 	    }
 	}
