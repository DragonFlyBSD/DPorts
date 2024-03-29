--- monitor.c.orig	2023-05-31 08:25:59 UTC
+++ monitor.c
@@ -355,7 +355,17 @@ monitor_insert_directory(int fd, char *n
 		{
 			monitor_insert_directory(fd, esc_name, path_buf);
 		}
-		else if( type == TYPE_FILE && check_notsparse(path_buf)) {
+		else if( type == TYPE_FILE && access(path_buf, R_OK) == 0) {
+			/*
+			 * Ignore the sparseness check on DragonFly to make the
+			 * rescanning work.  Although SEEK_HOLE is declared,
+			 * it's not implemented in lseek(2).  In addition, the
+			 * sparseness check by block count is broken for
+			 * filesystems with compression or deduplication, such
+			 * as HAMMER2.  Therefore, just disable the sparseness
+			 * check here and ignore the potential issues of Samba
+			 * client dealing with sparse files.
+			 */
 			monitor_insert_file(esc_name, path_buf);
 		}
 		free(esc_name);
