Add DragonFly support (kernel poc can return pids of 0 and -1, skip these)

--- proctree.c.orig	2013-07-13 07:23:21.078939000 +0000
+++ proctree.c
@@ -170,6 +170,7 @@ int update_tree(void del(void*))
 #ifdef HAVE_PROCESS_SYSCTL
 	el = get_all_info(&pi);
 	for(i = 0; i < el; i++) {
+		if (pi[i].kp_pid < 1) continue;
 		p = validate_proc(pi[i].kp_pid);
 		q = validate_proc(pi[i].kp_ppid);
 #else
