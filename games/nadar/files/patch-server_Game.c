
$FreeBSD: ports/games/nadar/files/patch-server_Game.c,v 1.2 2012/11/17 05:57:46 svnexp Exp $

--- server/Game.c.orig	Sun Aug 22 16:35:40 2004
+++ server/Game.c	Sun Aug 22 16:35:50 2004
@@ -226,7 +226,7 @@
       case PLAYER_DESTROY : /* Destroy 状態の Player を削除する */
 	current = ObjList_DeleteObjToPrev(game->player_list, current);
 	break;
-      default :
+      default : break;
       }
     }
 
