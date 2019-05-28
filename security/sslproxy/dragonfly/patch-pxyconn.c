--- pxyconn.c.intermediate	2019-05-28 15:41:07.000000000 +0000
+++ pxyconn.c
@@ -938,7 +938,7 @@ pxy_try_remove_sslproxy_header(pxy_conn_
 	}
 }
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #define getdtablecount() 0
 
 /*
