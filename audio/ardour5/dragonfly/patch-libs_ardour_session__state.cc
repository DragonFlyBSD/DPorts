--- libs/ardour/session_state.cc.orig	2017-09-15 20:56:23 UTC
+++ libs/ardour/session_state.cc
@@ -39,7 +39,7 @@
 #include <sys/vfs.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
@@ -2442,7 +2442,7 @@ Session::save_template (const string& te
 void
 Session::refresh_disk_space ()
 {
-#if __APPLE__ || __FreeBSD__ || __NetBSD__ || (HAVE_SYS_VFS_H && HAVE_SYS_STATVFS_H)
+#if __APPLE__ || __DragonFly__ || __FreeBSD__ || __NetBSD__ || (HAVE_SYS_VFS_H && HAVE_SYS_STATVFS_H)
 
 	Glib::Threads::Mutex::Lock lm (space_lock);
 
