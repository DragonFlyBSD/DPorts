--- src/os/unix/ngx_file_aio_read.c.orig	2018-10-24 18:29:08.441786000 +0200
+++ src/os/unix/ngx_file_aio_read.c	2018-10-24 18:29:37.032383000 +0200
@@ -110,7 +110,7 @@ ngx_file_aio_read(ngx_file_t *file, u_ch
 #if (NGX_HAVE_KQUEUE)
     aio->aiocb.aio_sigevent.sigev_notify_kqueue = ngx_kqueue;
     aio->aiocb.aio_sigevent.sigev_notify = SIGEV_KEVENT;
-    aio->aiocb.aio_sigevent.sigev_value.sigval_ptr = ev;
+    aio->aiocb.aio_sigevent.sigev_value.sival_ptr = ev;
 #endif
     ev->handler = ngx_file_aio_event_handler;
 
