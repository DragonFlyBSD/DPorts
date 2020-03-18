--- libpkg/scripts.c.orig	2020-02-21 14:18:42 UTC
+++ libpkg/scripts.c
@@ -163,7 +163,8 @@ pkg_script_run(struct pkg * const pkg, p
 			 * close all unuseful fd up to there
 			 */
 			for (int i = 5; i <= cur_pipe[1]; i++) {
-				posix_spawn_file_actions_addclose(&action, i);
+				if (i != cur_pipe[0])
+					posix_spawn_file_actions_addclose(&action, i);
 			}
 			if (utstring_len(script_cmd) > argmax) {
 				if (pipe(stdin_pipe) < 0) {
