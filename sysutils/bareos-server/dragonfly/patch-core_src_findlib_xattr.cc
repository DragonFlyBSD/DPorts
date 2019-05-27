--- core/src/findlib/xattr.cc.orig	2019-02-13 14:25:55 UTC
+++ core/src/findlib/xattr.cc
@@ -3870,9 +3870,13 @@ bxattr_exit_code BuildXattrStreams(JobCo
       xattr_data->current_dev = ff_pkt->statp.st_dev;
    }
 
+#ifdef __DragonFly__
+   {
+#else
    if ((xattr_data->flags & BXATTR_FLAG_SAVE_NATIVE) && os_parse_xattr_streams) {
       return os_build_xattr_streams(jcr, xattr_data, ff_pkt);
    } else {
+#endif
       return bxattr_exit_ok;
    }
 }
@@ -3932,6 +3936,9 @@ bxattr_exit_code ParseXattrStreams(JobCo
    /*
     * See if we are still restoring native xattr to this filesystem.
     */
+#ifdef __DragonFly__
+   if (0) {
+#else
    if ((xattr_data->flags & BXATTR_FLAG_RESTORE_NATIVE) && os_parse_xattr_streams) {
       /*
        * See if we can parse this stream, and ifso give it a try.
@@ -3942,6 +3949,7 @@ bxattr_exit_code ParseXattrStreams(JobCo
             goto bail_out;
          }
       }
+#endif
    } else {
       /*
        * Increment error count but don't log an error again for the same filesystem.
