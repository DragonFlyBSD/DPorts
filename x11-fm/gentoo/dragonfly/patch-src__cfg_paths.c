--- src/cfg_paths.c.orig	2015-01-22 22:13:56.000000000 +0200
+++ src/cfg_paths.c
@@ -220,7 +220,7 @@ static GtkWidget * cpt_init(MainInfo *mi
 				g_signal_connect(G_OBJECT(pick), "clicked", G_CALLBACK(evt_path_pick_clicked), page);
 				gtk_grid_attach(GTK_GRID(grid), pick, 2, i, 1, 1);
 			}
-#if defined __OpenBSD__ || defined __FreeBSD__ || defined __NetBSD__
+#if defined __OpenBSD__ || defined __FreeBSD__ || defined __NetBSD__ || defined __DragonFly__
 			/* Mountlist and mounted fs files are non-configurable on BSD systems. */
 			if(i == 2 || i == 3)
 				gtk_widget_set_sensitive(page->path[i].path, FALSE);
