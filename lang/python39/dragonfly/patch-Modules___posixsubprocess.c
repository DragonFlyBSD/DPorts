--- Modules/_posixsubprocess.c.intermediate	2020-11-13 18:43:51.000000000 +0000
+++ Modules/_posixsubprocess.c
@@ -46,7 +46,7 @@
 # endif
 #endif
 
-#if defined(__FreeBSD__) || (defined(__APPLE__) && defined(__MACH__))
+#if defined(__FreeBSD__) || defined(__DragonFly__) || (defined(__APPLE__) && defined(__MACH__))
 # define FD_DIR "/dev/fd"
 #else
 # define FD_DIR "/proc/self/fd"
@@ -116,7 +116,7 @@ _pos_int_from_ascii(const char *name)
 }
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* When /dev/fd isn't mounted it is often a static directory populated
  * with 0 1 2 or entries for 0 .. 63 on FreeBSD, NetBSD and OpenBSD.
  * NetBSD and OpenBSD have a /proc fs available (though not necessarily
@@ -366,7 +366,7 @@ _close_open_fds_maybe_unsafe(long start_
     ++start_fd;
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (!_is_fdescfs_mounted_on_dev_fd())
         proc_fd_dir = NULL;
     else
