--- gtk2_ardour/ardour_ui.cc.orig	2017-09-15 20:56:22 UTC
+++ gtk2_ardour/ardour_ui.cc
@@ -33,7 +33,7 @@
 #include <sys/resource.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -1307,7 +1307,7 @@ ARDOUR_UI::check_memory_locking ()
 		struct rlimit limits;
 		int64_t ram;
 		long pages, page_size;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		size_t pages_len=sizeof(pages);
 		if ((page_size = getpagesize()) < 0 ||
 				sysctlbyname("hw.availpages", &pages, &pages_len, NULL, 0))
@@ -1336,7 +1336,7 @@ ARDOUR_UI::check_memory_locking ()
 						  "You can view the memory limit with 'ulimit -l', "
 						  "and it is normally controlled by %2"),
 						PROGRAM_NAME,
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 						X_("/etc/login.conf")
 #else
 						X_(" /etc/security/limits.conf")
