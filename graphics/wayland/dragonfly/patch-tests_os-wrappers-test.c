--- tests/os-wrappers-test.c.orig	2022-11-01 14:26:03.250878000 +0100
+++ tests/os-wrappers-test.c	2022-11-01 14:28:28.137680000 +0100
@@ -39,7 +39,6 @@
 #include <stdarg.h>
 #include <fcntl.h>
 #include <stdio.h>
-#include <sys/epoll.h>
 
 #include "wayland-private.h"
 #include "test-runner.h"
@@ -152,15 +151,7 @@
 __attribute__ ((visibility("default"))) int
 epoll_create1(int flags)
 {
-	wrapped_calls_epoll_create1++;
-
-	if (fall_back) {
-		wrapped_calls_epoll_create1++; /* epoll_create() not wrapped */
-		errno = EINVAL;
-		return -1;
-	}
-
-	return real_epoll_create1(flags);
+	return 0;
 }
 
 static void
@@ -375,6 +366,7 @@
 	do_os_wrappers_recvmsg_cloexec(1);
 }
 
+#if !defined(__DragonFly__)
 static void
 do_os_wrappers_epoll_create_cloexec(int n)
 {
@@ -406,5 +398,6 @@
 	init_fallbacks(1);
 	do_os_wrappers_epoll_create_cloexec(2);
 }
+#endif
 
 /* FIXME: add tests for wl_os_accept_cloexec() */
