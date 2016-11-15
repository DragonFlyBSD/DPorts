--- spamd/grey.c.orig	2011-06-04 11:28:32.000000000 +0000
+++ spamd/grey.c
@@ -23,7 +23,11 @@
 #include <sys/wait.h>
 #include <net/if.h>
 #include <netinet/in.h>
+#ifdef __DragonFly__
+#include <net/pf/pfvar.h>
+#else
 #include <net/pfvar.h>
+#endif
 #include <arpa/inet.h>
 #include <ctype.h>
 #include <db.h>
@@ -743,10 +747,14 @@ greyscan(char *dbname)
 	db->close(db);
 	db = NULL;
 
+#ifdef __FreeBSD__
 	if(use_pf)
+#endif
 		configure_pf(whitelist, whitecount);
+#ifdef __FreeBSD__
 	else
 		configure_ipfw(whitelist, whitecount);
+#endif
 
 	configure_spamd(traplist, trapcount, trapcfg);
 
@@ -1267,7 +1275,9 @@ check_spamd_db(void)
 			db->sync(db, 0);
 			db->close(db);
 
+#ifdef __FreeBSD__
 			if(use_pf)
+#endif
 				drop_privs();
 
 			return;
@@ -1278,7 +1288,9 @@ check_spamd_db(void)
 			 * convert.
 			 */
 			convert_spamd_db();
+#ifdef __FreeBSD__
 			if(use_pf)
+#endif
 				drop_privs();
 			return;
 			break;
@@ -1290,7 +1302,9 @@ check_spamd_db(void)
 	}
 	db->sync(db, 0);
 	db->close(db);
+#ifdef __FreeBSD__
 	if(use_pf)
+#endif
 		drop_privs();
 }
 
@@ -1313,10 +1327,14 @@ greywatcher(void)
 		 * child, talks to jailed spamd over greypipe,
 		 * updates db. has no access to pf.
 		 */
+#ifdef __FreeBSD__
 		if(use_pf)
+#endif
 			close(pfdev);
+#ifdef __FreeBSD__
 		else
 			drop_privs();
+#endif
 		setproctitle("(%s update)", PATH_SPAMD_DB);
 		greyreader();
 		syslog_r(LOG_ERR, &sdata, "greyreader failed (%m)");
@@ -1339,10 +1357,14 @@ greywatcher(void)
 	sigaction(SIGCHLD, &sa, NULL);
 	sigaction(SIGINT, &sa, NULL);
 
+#ifdef __FreeBSD__
 	if(use_pf)
+#endif
 		setproctitle("(pf <spamd-white> update)");
+#ifdef __FreeBSD__
 	else
 		setproctitle("(ipfw table %d update)",ipfw_tabno);
+#endif
 	greyscanner();
 	/* NOTREACHED */
 	exit(1);
