--- core/src/findlib/xattr.cc.orig	2021-03-04 10:33:16.662851000 +0100
+++ core/src/findlib/xattr.cc	2021-03-04 10:40:20.565271000 +0100
@@ -3803,9 +3803,13 @@
     xattr_data->current_dev = ff_pkt->statp.st_dev;
   }
 
+#ifdef __DragonFly__
+  {
+#else
   if ((xattr_data->flags & BXATTR_FLAG_SAVE_NATIVE) && os_build_xattr_streams) {
     return os_build_xattr_streams(jcr, xattr_data, ff_pkt);
   } else {
+#endif
     return BxattrExitCode::kSuccess;
   }
 }
@@ -3858,6 +3862,9 @@
   /*
    * See if we are still restoring native xattr to this filesystem.
    */
+#ifdef __DragonFly__
+  {
+#else
   if ((xattr_data->flags & BXATTR_FLAG_RESTORE_NATIVE)
       && os_parse_xattr_streams) {
     /*
@@ -3871,6 +3878,7 @@
       }
     }
   } else {
+#endif
     /*
      * Increment error count but don't log an error again for the same
      * filesystem.
