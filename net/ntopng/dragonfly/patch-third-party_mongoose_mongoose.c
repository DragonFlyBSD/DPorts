--- third-party/mongoose/mongoose.c.orig	2016-06-27 15:12:56.000000000 +0300
+++ third-party/mongoose/mongoose.c
@@ -4444,7 +4444,7 @@ static int parse_port_string(const struc
   so->is_ssl = (vec->ptr[len] && vec->ptr[len] == 's');
   so->ssl_redir = (vec->ptr[len] && vec->ptr[len] == 'r');
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   so->lsa.sin.sin_len = sizeof(struct sockaddr_in);
 #endif
 
@@ -5268,7 +5268,7 @@ struct mg_context *mg_start(const struct
   check_ipv6_enabled();
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   is_ip6_enabled = 0;
 #endif
 
