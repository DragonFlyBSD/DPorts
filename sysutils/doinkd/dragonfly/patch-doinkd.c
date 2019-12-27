--- doinkd.c.intermediate	2019-12-26 13:25:48.000000000 +0000
+++ doinkd.c
@@ -289,7 +289,7 @@ int main(argc,argv)
 
       (void) time (&tempus);
 
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 	setutxent();
 #else
       if ((utmpfd = open (UTMP_FILE, O_RDONLY, 0)) == SYSERROR)
@@ -326,7 +326,7 @@ int main(argc,argv)
        * examine him again.
        */
 
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
       for (utmptr = 0, userptr = 0; utmp_ptr = getutxent();)
 #else
 #ifdef HAVE_UTMPX
@@ -342,7 +342,7 @@ int main(argc,argv)
             break;
          }
 
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 	 memcpy(&utmpbuf,utmp_ptr,sizeof(utmpbuf));
 #else
 #ifdef HAVE_UTMPX
@@ -363,7 +363,7 @@ int main(argc,argv)
          if (strcmp(utmpbuf.ut_line,XDM_DEV) == 0)
          {
             /* This is the console.  Is there a real name attached? */
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
             if (strlen(utmpbuf.ut_user) > 0)
 #else
             if (strlen(utmpbuf.ut_name) > 0)
@@ -374,21 +374,21 @@ int main(argc,argv)
          }
 #endif
 
-#if defined(SYSV) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900007)
+#if defined(SYSV) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
          if (utmpbuf.ut_type == USER_PROCESS || isConsole)
 #else /* SYSV */
 	 if (utmpbuf.ut_name[0] != NULL || isConsole)
 #endif /* SYSV */
 	 {
 	    user = &users[utmptr];
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 	    (void) strncpy (tmpname, utmpbuf.ut_user, NAMELEN);
 #else
 	    (void) strncpy (tmpname, utmpbuf.ut_name, NAMELEN);
 #endif
 	    tmpname[NAMELEN] = 0;
 
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 	    if (!strcmp (user->uid, tmpname) && user->time_on == utmpbuf.ut_tv.tv_sec)
 #else
 	    if (!strcmp (user->uid, tmpname) && user->time_on == utmpbuf.ut_xtime)
@@ -442,7 +442,7 @@ int main(argc,argv)
                   logfile ("Error:  could not get info on supposed user %s.",user->uid);
                else
                   getgroups_func (pswd->pw_name, user->groups, pswd->pw_gid);
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 	       user->time_on = utmpbuf.ut_tv.tv_sec;
 #else
 	       user->time_on = utmpbuf.ut_xtime;
