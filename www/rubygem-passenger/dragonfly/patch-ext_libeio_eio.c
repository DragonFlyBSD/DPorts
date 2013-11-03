--- ext/libeio/eio.c.orig	2013-11-03 16:01:49.670136000 +0000
+++ ext/libeio/eio.c
@@ -2345,6 +2345,7 @@ eio_execute (etp_worker *self, eio_req *
                           req->result = readlinkat (dirfd, req->ptr1, req->ptr2, PATH_MAX); break;
       case EIO_STATVFS:   ALLOC (sizeof (EIO_STRUCT_STATVFS));
                           req->result = eio__statvfsat (dirfd, req->ptr1, (EIO_STRUCT_STATVFS *)req->ptr2); break;
+#if 0
       case EIO_UTIME:
       case EIO_FUTIME:
         {
@@ -2368,6 +2369,7 @@ eio_execute (etp_worker *self, eio_req *
                         : utimensat (dirfd, req->ptr1, times, 0);
         }
         break;
+#endif
 
 #else
 
@@ -2392,6 +2394,7 @@ eio_execute (etp_worker *self, eio_req *
       case EIO_STATVFS:   ALLOC (sizeof (EIO_STRUCT_STATVFS));
                           req->result = statvfs   (path     , (EIO_STRUCT_STATVFS *)req->ptr2); break;
 
+#endif
       case EIO_UTIME:
       case EIO_FUTIME:
         {
@@ -2416,7 +2419,6 @@ eio_execute (etp_worker *self, eio_req *
         }
         break;
 
-#endif
 
       case EIO_REALPATH:  if (0 <= (req->result = eio__realpath (&self->tmpbuf, req->wd, req->ptr1)))
                             {
