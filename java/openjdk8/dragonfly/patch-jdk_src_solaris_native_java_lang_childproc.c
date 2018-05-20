--- jdk/src/solaris/native/java/lang/childproc.c.orig	2018-05-19 16:27:47 UTC
+++ jdk/src/solaris/native/java/lang/childproc.c
@@ -76,40 +76,9 @@ isAsciiDigit(char c)
 int
 closeDescriptors(void)
 {
-    DIR *dp;
-    struct dirent64 *dirp;
     int from_fd = FAIL_FILENO + 1;
 
-    /* We're trying to close all file descriptors, but opendir() might
-     * itself be implemented using a file descriptor, and we certainly
-     * don't want to close that while it's in use.  We assume that if
-     * opendir() is implemented using a file descriptor, then it uses
-     * the lowest numbered file descriptor, just like open().  So we
-     * close a couple explicitly.  */
-
-    close(from_fd);          /* for possible use by opendir() */
-    close(from_fd + 1);      /* another one for good luck */
-
-#if defined(_AIX)
-    /* AIX does not understand '/proc/self' - it requires the real process ID */
-    char aix_fd_dir[32];     /* the pid has at most 19 digits */
-    snprintf(aix_fd_dir, 32, "/proc/%d/fd", getpid());
-#endif
-
-    if ((dp = opendir(FD_DIR)) == NULL)
-        return 0;
-
-    /* We use readdir64 instead of readdir to work around Solaris bug
-     * 6395699: /proc/self/fd fails to report file descriptors >= 1024 on Solaris 9
-     */
-    while ((dirp = readdir64(dp)) != NULL) {
-        int fd;
-        if (isAsciiDigit(dirp->d_name[0]) &&
-            (fd = strtol(dirp->d_name, NULL, 10)) >= from_fd + 2)
-            close(fd);
-    }
-
-    closedir(dp);
+    closefrom(from_fd);
 
     return 1;
 }
