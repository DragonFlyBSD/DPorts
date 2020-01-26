--- core/src/findlib/xattr.cc.orig	2019-12-12 17:04:14 UTC
+++ core/src/findlib/xattr.cc
@@ -3888,9 +3888,13 @@ BxattrExitCode BuildXattrStreams(JobCont
       xattr_data->current_dev = ff_pkt->statp.st_dev;
    }
 
+#ifdef __DragonFly__
+   {
+#else
    if ((xattr_data->flags & BXATTR_FLAG_SAVE_NATIVE) && os_build_xattr_streams) {
       return os_build_xattr_streams(jcr, xattr_data, ff_pkt);
    } else {
+#endif
       return BxattrExitCode::kSuccess;
    }
 }
@@ -3950,6 +3954,9 @@ BxattrExitCode ParseXattrStreams(JobCont
    /*
     * See if we are still restoring native xattr to this filesystem.
     */
+#ifdef __DragonFly__
+   {
+#else
    if ((xattr_data->flags & BXATTR_FLAG_RESTORE_NATIVE) && os_parse_xattr_streams) {
       /*
        * See if we can parse this stream, and ifso give it a try.
@@ -3961,6 +3968,7 @@ BxattrExitCode ParseXattrStreams(JobCont
          }
       }
    } else {
+#endif
       /*
        * Increment error count but don't log an error again for the same filesystem.
        */
