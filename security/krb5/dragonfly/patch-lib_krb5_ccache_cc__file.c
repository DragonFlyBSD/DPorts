--- lib/krb5/ccache/cc_file.c.orig	2014-10-15 23:55:10 UTC
+++ lib/krb5/ccache/cc_file.c
@@ -136,6 +136,7 @@ get_size(krb5_context context, krb5_ccac
     fcc_data *data = id->data;
     struct stat sb;
 
+    *size_out = 0;
     k5_cc_mutex_assert_locked(context, &data->lock);
     if (fstat(data->fd, &sb) == -1)
         return interpret_errno(context, errno);
