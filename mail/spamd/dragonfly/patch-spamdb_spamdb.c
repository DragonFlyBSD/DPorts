--- spamdb/spamdb.c.orig	2010-07-04 19:54:46.000000000 +0000
+++ spamdb/spamdb.c
@@ -26,7 +26,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/stat.h>
 #include <syslog.h>
 #endif
@@ -37,7 +37,7 @@
 #include <unistd.h>
 
 #include "grey.h"
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "sync.h"
 #endif
 
@@ -58,7 +58,7 @@ int sdata = 0;					/* dummy */
 int	dblist(DB *);
 int	dbupdate(DB *, char *, int, int);
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* things we need for sync */
 void 	check_opt_sequence(char **, int);
 
@@ -111,7 +111,7 @@ dbupdate(DB *db, char *ip, int add, int
 			goto bad;
 		}
 	} else {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		/* sync the entry to all peers */
 		if (syncsend) {
 			switch (type) {
@@ -308,7 +308,7 @@ extern char *__progname;
 static int
 usage(void)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	fprintf(stderr,
 		"usage: %s [-D] [-Y synctarget] [-W whiteexp] [[-Tt] -a keys] [[-Tt] -d keys]\n",
 		__progname);
@@ -319,7 +319,7 @@ usage(void)
 	/* NOTREACHED */
 }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* check if parameters -D or -Y applied after -t or -ta parameter */
 void
 check_opt_sequence(char **argv, int argc)
@@ -344,7 +344,7 @@ main(int argc, char **argv)
 	HASHINFO	hashinfo;
 	DB		*db;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	int syncfd = 0;
 	struct servent *ent;
 	struct stat dbstat;
@@ -398,7 +398,7 @@ main(int argc, char **argv)
 	argv += optind;
 	if (action == 0 && type != WHITE)
 		usage();
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* check if PATH_SPAMD_DB is a regular file */
 	if (lstat(PATH_SPAMD_DB, &dbstat) == 0 && !S_ISREG(dbstat.st_mode)) {
 		syslog(LOG_ERR, "error %s (Not a regular file)", PATH_SPAMD_DB);
@@ -418,7 +418,7 @@ main(int argc, char **argv)
 			    action ? "writing" : "reading");
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	/* sync only WHITE and TRAPHIT */
 	if (action != 1 || type == SPAMTRAP)
 		syncsend = 0;
@@ -434,7 +434,7 @@ main(int argc, char **argv)
 	case 0:
 		return dblist(db);
 	case 1:
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		check_opt_sequence(argv, argc);
 #endif
 		for (i=0; i<argc; i++)
@@ -446,7 +446,7 @@ main(int argc, char **argv)
 			errx(2, "no addresses specified");
 		break;
 	case 2:
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		check_opt_sequence(argv, argc);
 #endif
 		for (i=0; i<argc; i++)
@@ -460,7 +460,7 @@ main(int argc, char **argv)
 	default:
 		errx(-1, "bad action");
 	}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if (syncsend)
 		closelog_r(&sdata);
 #endif
