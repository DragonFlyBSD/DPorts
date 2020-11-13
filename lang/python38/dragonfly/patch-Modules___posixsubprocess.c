--- Modules/_posixsubprocess.c.intermediate	2020-11-13 15:20:30.000000000 +0000
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
@@ -43,7 +43,7 @@
 # endif
 #endif
 
-#if defined(__FreeBSD__) || (defined(__APPLE__) && defined(__MACH__))
+#if defined(__FreeBSD__) || defined(__DragonFly__) || (defined(__APPLE__) && defined(__MACH__))
 # define FD_DIR "/dev/fd"
 #else
 # define FD_DIR "/proc/self/fd"
@@ -90,7 +90,7 @@ _pos_int_from_ascii(const char *name)
 }
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* When /dev/fd isn't mounted it is often a static directory populated
  * with 0 1 2 or entries for 0 .. 63 on FreeBSD, NetBSD and OpenBSD.
  * NetBSD and OpenBSD have a /proc fs available (though not necessarily
@@ -340,7 +340,7 @@ _close_open_fds_maybe_unsafe(long start_
     ++start_fd;
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (!_is_fdescfs_mounted_on_dev_fd())
         proc_fd_dir = NULL;
     else
