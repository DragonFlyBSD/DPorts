--- pidof.c.orig	2014-10-27 15:09:30 UTC
+++ pidof.c
@@ -53,13 +53,16 @@
 	if ((kd = kvm_open("/dev/null", "/dev/null", "/dev/null", O_RDONLY, "kvm_open")) == NULL) 
 			 (void)errx(1, "%s", kvm_geterr(kd));
 	else {
-#if __FreeBSD__ < 5
+#if (defined(__FreeBSD__) && __FreeBSD__ < 5) || defined(__DragonFly__)
 		p = kvm_getprocs(kd, KERN_PROC_ALL, 0, &n_processes);
 #else
 		p = kvm_getprocs(kd, KERN_PROC_PROC, 0, &n_processes);
 #endif /* __FreeBSD__ < 5 */
 		for (i = 0; i<n_processes; i++)
-#if __FreeBSD__ < 5
+#ifdef __DragonFly__
+			if (strncmp(process_name, p[i].kp_comm, MAXCOMLEN+1) == 0) {
+				(void)printf("%d ", (int)p[i].kp_pid);
+#elif __FreeBSD__ < 5
 			if (strncmp(process_name, p[i].kp_proc.p_comm, MAXCOMLEN+1) == 0) {
 				(void)printf("%d ", (int)p[i].kp_proc.p_pid);
 #else
