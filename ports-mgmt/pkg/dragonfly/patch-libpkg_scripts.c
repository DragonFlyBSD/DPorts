--- libpkg/scripts.c.orig	2020-02-21 06:18:42.000000000 -0800
+++ libpkg/scripts.c	2020-03-18 16:01:21.573105000 -0700
@@ -163,7 +163,8 @@
 			 * close all unuseful fd up to there
 			 */
 			for (int i = 5; i <= cur_pipe[1]; i++) {
-				posix_spawn_file_actions_addclose(&action, i);
+				if (i != cur_pipe[0])
+					posix_spawn_file_actions_addclose(&action, i);
 			}
 			if (utstring_len(script_cmd) > argmax) {
 				if (pipe(stdin_pipe) < 0) {
@@ -255,6 +256,8 @@
 				if (getline(&line, &linecap, f) > 0) {
 					pkg_emit_message(line);
 				}
+				if (feof(f))
+					break;
 			}
 			fclose(f);
 
