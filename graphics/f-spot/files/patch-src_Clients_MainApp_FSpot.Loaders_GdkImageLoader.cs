
$FreeBSD: graphics/f-spot/files/patch-src_Clients_MainApp_FSpot.Loaders_GdkImageLoader.cs 300896 2012-07-14 13:54:48Z beat $

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
