--- pxyconn.c.orig	2019-08-13 07:12:20 UTC
+++ pxyconn.c
@@ -938,7 +938,7 @@ pxy_try_remove_sslproxy_header(pxy_conn_
 	}
 }
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define getdtablecount() 0
 
 /*
@@ -1051,7 +1051,7 @@ check_fd_usage(
 		goto out;
 	}
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	if (available_fds(FD_RESERVE) == -1) {
 		goto out;
 	}
