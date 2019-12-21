--- Modules/_posixsubprocess.c.intermediate	2019-12-21 11:34:51.000000000 +0000
+++ Modules/_posixsubprocess.c
@@ -8,7 +8,7 @@
 #ifdef HAVE_SYS_TYPES_H
 #include <sys/types.h>
 #endif
-#if defined(HAVE_SYS_STAT_H) && defined(__FreeBSD__)
+#if defined(HAVE_SYS_STAT_H) && (defined(__FreeBSD__) || defined(__DragonFly__))
 #include <sys/stat.h>
 #endif
 #ifdef HAVE_SYS_SYSCALL_H
@@ -41,7 +41,7 @@
 # endif
 #endif
 
-#if defined(__FreeBSD__) || (defined(__APPLE__) && defined(__MACH__))
+#if defined(__FreeBSD__) || defined(__DragonFly__) || (defined(__APPLE__) && defined(__MACH__))
 # define FD_DIR "/dev/fd"
 #else
 # define FD_DIR "/proc/self/fd"
@@ -88,7 +88,7 @@ _pos_int_from_ascii(const char *name)
 }
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* When /dev/fd isn't mounted it is often a static directory populated
  * with 0 1 2 or entries for 0 .. 63 on FreeBSD, NetBSD and OpenBSD.
  * NetBSD and OpenBSD have a /proc fs available (though not necessarily
@@ -236,7 +236,7 @@ _close_fds_by_brute_force(long start_fd,
         start_fd = keep_fd + 1;
     }
     if (start_fd <= end_fd) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         if (end_fd >= sysconf(_SC_OPEN_MAX)) {
             closefrom(start_fd);
         } else
@@ -350,7 +350,7 @@ _close_open_fds_maybe_unsafe(long start_
     ++start_fd;
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (!_is_fdescfs_mounted_on_dev_fd())
         proc_fd_dir = NULL;
     else
