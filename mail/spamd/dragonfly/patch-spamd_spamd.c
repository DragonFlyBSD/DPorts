--- spamd/spamd.c.orig	2010-07-04 20:11:33.000000000 +0000
+++ spamd/spamd.c
@@ -25,7 +25,7 @@
 #include <sys/resource.h>
 
 /* XXX need for lstat check */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/stat.h>
 #endif
@@ -50,7 +50,7 @@
 #include "grey.h"
 #include "sync.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 int ipfw_tabno = 1;
 int use_pf = 1;
 char *pid_file = "/var/run/spamd.pid";
@@ -1060,7 +1060,7 @@ get_maxfiles(void)
 int
 main(int argc, char *argv[])
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined (__DragonFly__)
 	extern char *__progname;
 	FILE *fpid = NULL;
 	struct stat dbstat;
@@ -1205,7 +1205,7 @@ main(int argc, char *argv[])
 		}
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* check if PATH_SPAMD_DB is a regular file */
 	if (lstat(PATH_SPAMD_DB, &dbstat) == 0 && !S_ISREG(dbstat.st_mode)) {
 		syslog(LOG_ERR, "error %s (Not a regular file)", PATH_SPAMD_DB);
@@ -1288,7 +1288,7 @@ main(int argc, char *argv[])
 	if ((pw = getpwnam("_spamd")) == NULL)
 		errx(1, "no such user _spamd");
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* open the pid file just before daemon */
 	fpid = fopen(pid_file, "w");
 	if (fpid == NULL) {
@@ -1303,7 +1303,7 @@ main(int argc, char *argv[])
 	}
 
 	if (greylist) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		if(use_pf){
 #endif
 			pfdev = open("/dev/pf", O_RDWR);
@@ -1311,7 +1311,7 @@ main(int argc, char *argv[])
 				syslog_r(LOG_ERR, &sdata, "open /dev/pf: %m");
 				exit(1);
 			}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		}
 #endif
 
@@ -1370,7 +1370,7 @@ main(int argc, char *argv[])
 	}
 
 jail:
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* after switch user and daemon write and close the pid file */
 	if (fpid) {
 		fprintf(fpid, "%ld\n", (long) getpid());
