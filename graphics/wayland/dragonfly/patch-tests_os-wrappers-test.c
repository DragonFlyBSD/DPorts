--- tests/os-wrappers-test.c.orig	2024-08-24 15:43:55 UTC
+++ tests/os-wrappers-test.c
@@ -38,7 +38,6 @@
 #include <stdarg.h>
 #include <fcntl.h>
 #include <stdio.h>
-#include <sys/epoll.h>
 
 #include "wayland-private.h"
 #include "test-runner.h"
@@ -47,7 +46,6 @@
 extern int (*wl_socket)(int domain, int type, int protocol);
 extern int (*wl_fcntl)(int fildes, int cmd, ...);
 extern ssize_t (*wl_recvmsg)(int socket, struct msghdr *message, int flags);
-extern int (*wl_epoll_create1)(int flags);
 
 static int fall_back;
 
@@ -121,15 +119,7 @@ recvmsg_wrapper(int sockfd, struct msghd
 static int
 epoll_create1_wrapper(int flags)
 {
-	wrapped_calls_epoll_create1++;
-
-	if (fall_back) {
-		wrapped_calls_epoll_create1++; /* epoll_create() not wrapped */
-		errno = EINVAL;
-		return -1;
-	}
-
-	return epoll_create1(flags);
+	return 0;
 }
 
 static void
@@ -139,7 +129,6 @@ init_fallbacks(int do_fallbacks)
 	wl_fcntl = fcntl_wrapper;
 	wl_socket = socket_wrapper;
 	wl_recvmsg = recvmsg_wrapper;
-	wl_epoll_create1 = epoll_create1_wrapper;
 }
 
 static void
@@ -356,6 +345,7 @@ TEST(os_wrappers_recvmsg_cloexec_fallbac
 	do_os_wrappers_recvmsg_cloexec(1);
 }
 
+#if !defined(__DragonFly__)
 static void
 do_os_wrappers_epoll_create_cloexec(int n)
 {
@@ -387,5 +377,6 @@ TEST(os_wrappers_epoll_create_cloexec_fa
 	init_fallbacks(1);
 	do_os_wrappers_epoll_create_cloexec(2);
 }
+#endif
 
 /* FIXME: add tests for wl_os_accept_cloexec() */
