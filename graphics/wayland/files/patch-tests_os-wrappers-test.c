--- tests/os-wrappers-test.c.orig	2020-04-08 15:30:32.051523000 +0300
+++ tests/os-wrappers-test.c	2020-04-08 17:43:14.174683000 +0300
@@ -38,7 +38,9 @@
 #include <stdarg.h>
 #include <fcntl.h>
 #include <stdio.h>
+#if !defined(__DragonFly__)
 #include <sys/epoll.h>
+#endif
 
 #include "wayland-private.h"
 #include "test-runner.h"
@@ -114,6 +116,7 @@ recvmsg(int sockfd, struct msghdr *msg,
 	return real_recvmsg(sockfd, msg, flags);
 }
 
+#if !defined(__DragonFly__)
 __attribute__ ((visibility("default"))) int
 epoll_create1(int flags)
 {
@@ -127,6 +130,13 @@ epoll_create1(int flags)
 
 	return real_epoll_create1(flags);
 }
+#else
+__attribute__ ((visibility("default"))) int
+epoll_create1(int flags)
+{
+	return 0;
+}
+#endif
 
 static void
 do_os_wrappers_socket_cloexec(int n)
@@ -334,6 +344,7 @@ TEST(os_wrappers_recvmsg_cloexec_fallbac
 	do_os_wrappers_recvmsg_cloexec(1);
 }
 
+#if !defined(__DragonFly__)
 static void
 do_os_wrappers_epoll_create_cloexec(int n)
 {
@@ -365,5 +376,6 @@ TEST(os_wrappers_epoll_create_cloexec_fa
 	init_fallbacks(1);
 	do_os_wrappers_epoll_create_cloexec(2);
 }
+#endif
 
 /* FIXME: add tests for wl_os_accept_cloexec() */
