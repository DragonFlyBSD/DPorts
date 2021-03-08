--- src/pxyconn.c.orig	2021-02-11 07:56:11 UTC
+++ src/pxyconn.c
@@ -847,7 +847,7 @@ pxy_try_remove_sslproxy_header(pxy_conn_
 	}
 }
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define getdtablecount() 0
 
 /*
@@ -957,7 +957,7 @@ check_fd_usage(
 		goto out;
 	}
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	if (available_fds(FD_RESERVE) == -1) {
 		goto out;
 	}
