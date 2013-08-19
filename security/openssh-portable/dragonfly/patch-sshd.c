--- sshd.c.intermediate	2013-08-19 17:23:26.507870000 +0000
+++ sshd.c
@@ -1822,9 +1822,6 @@ main(int ac, char **av)
 	/* Reinitialize the log (because of the fork above). */
 	log_init(__progname, options.log_level, options.log_facility, log_stderr);
 
-	/* Avoid killing the process in high-pressure swapping environments. */
-	if (!inetd_flag && madvise(NULL, 0, MADV_PROTECT) != 0)
-		debug("madvise(): %.200s", strerror(errno));
 
 	/* Initialize the random number generator. */
 	arc4random_stir();
