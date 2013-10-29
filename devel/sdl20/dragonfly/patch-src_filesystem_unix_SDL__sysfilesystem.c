--- src/filesystem/unix/SDL_sysfilesystem.c.orig	2013-10-24 04:05:29.000000000 +0000
+++ src/filesystem/unix/SDL_sysfilesystem.c
@@ -79,7 +79,7 @@ SDL_GetBasePath(void)
 {
     char *retval = NULL;
 
-#if defined(__FREEBSD__)
+#if defined(__FREEBSD__) && !defined(__DragonFly__)
     char fullpath[PATH_MAX];
     size_t buflen = sizeof (fullpath);
     const int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
