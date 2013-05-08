--- spamlogd/spamlogd.c.orig	2010-11-25 23:08:30.000000000 +0000
+++ spamlogd/spamlogd.c
@@ -27,20 +27,29 @@
 #include <sys/socket.h>
 #include <sys/ioctl.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/stat.h>
 #endif
 #include <net/if.h>
 #include <net/if_var.h>
 #include <net/if_types.h>
+#ifdef __DragonFly__
+#include <net/pf/if_pflog.h>
+#else
 #include <net/if_pflog.h>
+#endif
 
 #include <netinet/in.h>
 #include <netinet/in_systm.h>
 #include <netinet/ip.h>
 #include <arpa/inet.h>
 
+#ifdef __DragonFly__
+#include <net/pf/pfvar.h>
+#include <net/bpf.h>
+#else
 #include <net/pfvar.h>
+#endif
 
 #include <db.h>
 #include <err.h>
@@ -337,7 +346,7 @@ usage(void)
 int
 main(int argc, char **argv)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	FILE		*fpid = NULL;
 	struct		stat dbstat;
 	int		rst;
@@ -398,7 +407,7 @@ main(int argc, char **argv)
 		}
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* check if PATH_SPAMD_DB exist and is a regular file */
 	rst = lstat(PATH_SPAMD_DB, &dbstat);
 	if (rst == -1 && errno == ENOENT){
@@ -427,7 +436,7 @@ main(int argc, char **argv)
 			err(1, "sync init");
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* open the pid file just before switch the user */
 	fpid = fopen(pid_file, "w");
 	if (fpid == NULL) {
@@ -453,7 +462,7 @@ main(int argc, char **argv)
 		openlog_r("spamlogd", LOG_PID | LOG_NDELAY, LOG_DAEMON, &sdata);
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* after switch user and daemon write and close the pid file */
 	if (fpid) {
 		fprintf(fpid, "%ld\n", (long) getpid());
