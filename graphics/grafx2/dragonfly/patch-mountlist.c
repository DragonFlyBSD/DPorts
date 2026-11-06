--- mountlist.c.orig	2024-04-29 15:47:02 UTC
+++ mountlist.c
@@ -23,9 +23,9 @@
 #if(!(defined(__WIN32__)||defined(WIN32)))&&(!defined(__amigaos4__))&&(!defined(__AROS__))&&(!defined(__MORPHOS__))&&(!defined(__amigaos__))
 
 // We don't use autoconf and all that in grafx2, so let's do the config here ...
-#if defined(__macosx__) || defined(__FreeBSD__) || defined(__OpenBSD__)                       // MacOS X is POSIX compliant
+#if defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)                       // MacOS X is POSIX compliant
     #define MOUNTED_GETMNTINFO
-#if defined(__macosx__) || defined(__FreeBSD__)
+#if defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/types.h>
 #endif
 #if defined(__OpenBSD__)
@@ -359,7 +359,7 @@ read_file_system_list (bool need_fs_type)
         me = malloc (sizeof *me);
         me->me_devname = strdup (fsp->f_mntfromname);
         me->me_mountdir = strdup (fsp->f_mntonname);
-#if defined(__macosx__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__macosx__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
         me->me_type = fsp->f_fstypename;
 #else
         me->me_type = fsp->fs_typename;
