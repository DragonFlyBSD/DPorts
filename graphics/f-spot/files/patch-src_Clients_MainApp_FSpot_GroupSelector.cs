
$FreeBSD: graphics/f-spot/files/patch-src_Clients_MainApp_FSpot_GroupSelector.cs 300896 2012-07-14 13:54:48Z beat $

--- src/Clients/MainApp/FSpot/GroupSelector.cs.orig
+++ src/Clients/MainApp/FSpot/GroupSelector.cs
@@ -431,7 +431,7 @@
 				bounds.Height = selector.background.Height;
 				bounds.Y = selector.background.Y;
 				bounds.X = selector.BoxX (item);
-				bounds.Width = Math.Max (selector.BoxX (item + 1) - bounds.X, 1);
+				bounds.Width = Math.Max (selector.BoxX (item + 1) - selector.BoxX (item), 1);
 
 				if (item < 0 || item > selector.box_counts.Length - 1)
 					return;
