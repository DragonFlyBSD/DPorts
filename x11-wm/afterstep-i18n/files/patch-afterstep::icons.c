$FreeBSD: x11-wm/afterstep-i18n/files/patch-afterstep::icons.c 300897 2012-07-14 14:29:18Z beat $

--- afterstep/icons.c.orig	Thu Mar 20 19:09:21 1997
+++ afterstep/icons.c	Sun May 26 18:15:10 2002
@@ -779,10 +779,12 @@
 	}
     } 
 
-    if(tmp_win->flags & ICON_MOVED)
-      CreateIconWindow(tmp_win,tmp_win->icon_x_loc,tmp_win->icon_y_loc);
-    else
-      CreateIconWindow(tmp_win, def_x, def_y);
+    if(tmp_win->icon_pixmap_w == None) {
+      if(tmp_win->flags & ICON_MOVED)
+        CreateIconWindow(tmp_win,tmp_win->icon_x_loc,tmp_win->icon_y_loc);
+      else
+        CreateIconWindow(tmp_win, def_x, def_y);
+    }
 
   AutoPlace(tmp_win);
   tmp_win->flags |= ICONIFIED;
