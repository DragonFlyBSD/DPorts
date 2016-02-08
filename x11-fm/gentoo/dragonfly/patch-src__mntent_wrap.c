--- src/mntent_wrap.c.orig	2013-06-30 12:26:08.000000000 +0300
+++ src/mntent_wrap.c
@@ -92,7 +92,7 @@ gint mne_endmntent(FILE *filep)
 	return -1;
 }
 
-#elif defined __OpenBSD__ || defined __FreeBSD__ || defined __NetBSD__ || (defined __osf__ && defined __alpha__)
+#elif defined __OpenBSD__ || defined __FreeBSD__ || defined __NetBSD__ || defined __DragonFly__ || (defined __osf__ && defined __alpha__)
 
 /* Here is the implementation for BSD and Alpha Tru64 systems. */
 
@@ -109,7 +109,11 @@ gint mne_endmntent(FILE *filep)
 ** of what kind of mount entries we're supposed to deal with. Since gentoo will
 ** pass a FILE pointer to mne_getmntent() anyway, it seems natural to use it.
 */
+#ifdef __DragonFly__
+static FILE	*p_fstab, *p_mtab;
+#else
 static FILE	f_fstab, f_mtab;
+#endif
 
 /* These are used when we're accessing the currently mounted filesystems, using
 ** a call to getmntinfo(). The mtab_pos and mtab_num integers are then used to
@@ -132,14 +136,22 @@ FILE * mne_setmntent(const gchar *filena
 	if(strcmp(filename, "/etc/fstab") == 0)		/* Looking for available filesystems? */
 	{
 		if(setfsent() == 1)
+#ifdef __DragonFly__
+			return p_fstab;
+#else
 			return &f_fstab;
+#endif
 	}
 	else if(strcmp(filename, "/proc/mtab") == 0)	/* Looking for mounted filesystems? */
 	{
 		if((mtab_num = getmntinfo(&mtab, 0)) > 0)
 		{
 			mtab_pos = 0;
+#ifdef __DragonFly__
+			return p_mtab;
+#else
 			return &f_mtab;
+#endif
 		}
 	}
 	return NULL;
@@ -153,7 +165,11 @@ const MntEnt * mne_getmntent(FILE *filep
 {
 	static MntEnt	me;
 
+#ifdef __DragonFly__
+	if(filep == p_fstab)
+#else
 	if(filep == &f_fstab)
+#endif
 	{
 		struct fstab	*ment;
 
@@ -164,7 +180,11 @@ const MntEnt * mne_getmntent(FILE *filep
 			return &me;
 		}
 	}
+#ifdef __DragonFly__
+	else if(filep == p_mtab)
+#else
 	else if(filep == &f_mtab)
+#endif
 	{
 		if(mtab_pos == mtab_num)		/* Array exhausted? */
 			return NULL;
@@ -182,7 +202,11 @@ const MntEnt * mne_getmntent(FILE *filep
 /* 1999-05-09 -	Stop traversing mount/fs data. */
 gint mne_endmntent(FILE *filep)
 {
+#ifdef __DragonFly__
+	if(filep == p_fstab)
+#else
 	if(filep == &f_fstab)
+#endif
 		endfsent();
 
 	return 0;
