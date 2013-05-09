
$FreeBSD: devel/oaf/files/patch-liboaf::oaf-fork-server.c 300896 2012-07-14 13:54:48Z beat $

--- liboaf/oaf-fork-server.c	2002/02/14 01:44:13	1.1
+++ liboaf/oaf-fork-server.c	2002/02/14 01:44:39
@@ -264,6 +264,8 @@
 	} else if ((childpid = fork ())) {
 		_exit (0);	/* de-zombifier process, just exit */
 	} else {
+		sigprocmask (SIG_SETMASK, &omask, NULL);
+
                 if (display)
 		  oaf_setenv ("DISPLAY", display);
 		if (od_iorstr)
