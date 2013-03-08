
$FreeBSD: ports/graphics/f-spot/files/patch-src_Clients_MainApp_FSpot.Loaders_GdkImageLoader.cs,v 1.2 2012/11/17 05:58:05 svnexp Exp $

--- src/Clients/MainApp/FSpot.Loaders/GdkImageLoader.cs.orig
+++ src/Clients/MainApp/FSpot.Loaders/GdkImageLoader.cs
@@ -112,7 +112,7 @@
 		public new bool Close ()
 		{
 			lock (sync_handle) {
-				return base.Close (true);
+				return base.Close ();
 			}
 		}
 #endregion
