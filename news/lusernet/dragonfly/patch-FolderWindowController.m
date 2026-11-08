--- FolderWindowController.m.orig
+++ FolderWindowController.m
@@ -416,7 +416,7 @@
 				[idx release];
 			}
 		}
-		[sorted_msgs sortUsingFunction: (int(*)(id,id,void *))sort_funcs[sort_mode] context: ft];
+		[sorted_msgs sortUsingFunction: (NSComparisonResult(*)(id,id,void *))sort_funcs[sort_mode] context: ft];
 	}
 
 	[list reloadData];
