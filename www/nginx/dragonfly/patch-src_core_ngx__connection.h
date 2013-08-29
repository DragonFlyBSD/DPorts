--- src/core/ngx_connection.h.orig	2013-07-17 12:51:21.000000000 +0000
+++ src/core/ngx_connection.h
@@ -187,6 +187,7 @@ ngx_int_t ngx_set_inherited_sockets(ngx_
 ngx_int_t ngx_open_listening_sockets(ngx_cycle_t *cycle);
 void ngx_configure_listening_sockets(ngx_cycle_t *cycle);
 void ngx_close_listening_sockets(ngx_cycle_t *cycle);
+void ngx_shutdown_listening_sockets(ngx_cycle_t *cycle);
 void ngx_close_connection(ngx_connection_t *c);
 ngx_int_t ngx_connection_local_sockaddr(ngx_connection_t *c, ngx_str_t *s,
     ngx_uint_t port);
