--- mntent_compat.c.orig	2016-01-03 09:38:19 UTC
+++ mntent_compat.c
@@ -40,7 +40,6 @@ struct mntent *getmntent(FILE * filep)
 #ifdef MNT_NODEV
         if (getmntent_mntbufp[getmntent_mntpos].f_flags & MNT_NODEV)          getmntent_addopt(&c, "nodev");
 #endif
-        if (getmntent_mntbufp[getmntent_mntpos].f_flags & MNT_UNION)          getmntent_addopt(&c, "union");
         if (getmntent_mntbufp[getmntent_mntpos].f_flags & MNT_ASYNC)          getmntent_addopt(&c, "async");
         if (getmntent_mntbufp[getmntent_mntpos].f_flags & MNT_NOATIME)        getmntent_addopt(&c, "noatime");
         if (getmntent_mntbufp[getmntent_mntpos].f_flags & MNT_NOCLUSTERR)     getmntent_addopt(&c, "noclusterr");
