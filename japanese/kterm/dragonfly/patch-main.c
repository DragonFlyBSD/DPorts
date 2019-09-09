--- main.c.intermediate	2019-08-04 11:49:22.000000000 +0000
+++ main.c
@@ -143,8 +143,14 @@ static Bool IsPts = False;
 #define WTMP
 #endif
 
+#if defined(__DragonFly__)
+#define USE_SYSV_UTMP
+#define WTMP
+#define WTMPX_FILE "/var/log/wtmpx"
+#endif
+
 /* from xterm-200 */
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__INTERIX) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__INTERIX) || defined(__APPLE__) || defined(__DragonFly__)
 #ifndef USE_POSIX_TERMIOS
 #define USE_POSIX_TERMIOS
 #endif
@@ -296,7 +302,7 @@ extern Time_t time ();
 #define ttyslot() 1
 #endif /* apollo */
 
-#if defined(SVR4) || (defined(__FreeBSD__) && __FreeBSD_version >= 900007)
+#if defined(SVR4) || (defined(__FreeBSD__) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 #include <utmpx.h>
 #define setutent setutxent
 #define getutent getutxent
@@ -2376,7 +2382,7 @@ spawn ()
 #endif	/* sun */
 	struct passwd *pw = NULL;
 #ifdef UTMP
-#ifdef SVR4
+#if defined(SVR4) || defined(__DragonFly__)
 	struct utmpx utmp;
 #else
 	struct utmp utmp;
@@ -3320,7 +3326,7 @@ spawn ()
 			       sizeof(utmp.ut_name));
 
 		utmp.ut_pid = getpid();
-#ifdef SVR4
+#if defined(SVR4) || defined(__DragonFly__)
 		utmp.ut_session = getsid(0);
 		utmp.ut_xtime = time ((Time_t *) 0);
 		utmp.ut_tv.tv_usec = 0;
@@ -3332,7 +3338,7 @@ spawn ()
 		if (!resource.utmpInhibit)
 		    (void) pututline(&utmp);
 #ifdef WTMP
-#ifdef SVR4
+#if defined(SVR4) || defined(__DragonFly__)
 		if (term->misc.login_shell)
 		    updwtmpx(WTMPX_FILE, &utmp);
 #else
@@ -3730,7 +3736,7 @@ Exit(n)
         int pty = term->screen.respond;  /* file descriptor of pty */
 #ifdef UTMP
 #ifdef USE_SYSV_UTMP
-#ifdef SVR4
+#if defined(SVR4) || defined(__DragonFly__)
 	struct utmpx utmp;
 	struct utmpx *utptr;
 #else
@@ -3771,7 +3777,7 @@ Exit(n)
 	    /* write it out only if it exists, and the pid's match */
 	    if (utptr && (utptr->ut_pid == screen->pid)) {
 		    utptr->ut_type = DEAD_PROCESS;
-#ifdef SVR4
+#if defined(SVR4) || defined(__DragonFly__)
 		    utmp.ut_session = getsid(0);
 		    utmp.ut_xtime = time ((Time_t *) 0);
 		    utmp.ut_tv.tv_usec = 0;
@@ -3780,7 +3786,7 @@ Exit(n)
 #endif
 		    (void) pututline(utptr);
 #ifdef WTMP
-#ifdef SVR4
+#if defined(SVR4) || defined(__DragonFly__)
 		    updwtmpx(WTMPX_FILE, &utmp);
 #else
 		    /* set wtmp entry if wtmp file exists */
