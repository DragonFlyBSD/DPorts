--- src/proctree.c.orig	2018-04-11 06:10:50 UTC
+++ src/proctree.c
@@ -172,6 +172,7 @@ int update_tree(void del(void*))
 #ifdef HAVE_PROCESS_SYSCTL
 	el = get_all_info(&pi);
 	for(i = 0; i < el; i++) {
+		if (pi[i].kinfo_pid < 1) continue;
 		p = validate_proc(pi[i].kinfo_pid, ' ');
 		q = validate_proc(pi[i].kinfo_ppid, ' ');
 #else
