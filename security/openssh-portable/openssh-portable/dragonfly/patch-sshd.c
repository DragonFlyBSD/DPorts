--- sshd.c.intermediate	2014-02-12 20:20:33.797717000 +0000
+++ sshd.c
@@ -1895,9 +1895,6 @@ main(int ac, char **av)
 	/* Reinitialize the log (because of the fork above). */
 	log_init(__progname, options.log_level, options.log_facility, log_stderr);
 
- 	/* Avoid killing the process in high-pressure swapping environments. */
- 	if (!inetd_flag && madvise(NULL, 0, MADV_PROTECT) != 0)
- 		debug("madvise(): %.200s", strerror(errno));
 
 	/* Chdir to the root directory so that the current disk can be
 	   unmounted if desired. */
