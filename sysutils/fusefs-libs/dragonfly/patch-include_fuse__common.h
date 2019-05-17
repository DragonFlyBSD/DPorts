--- include/fuse_common.h.orig	2019-01-04 13:38:34 UTC
+++ include/fuse_common.h
@@ -469,7 +469,7 @@ void fuse_remove_signal_handlers(struct
  * ----------------------------------------------------------- */
 
 #if FUSE_USE_VERSION < 26
-#    ifdef __FreeBSD__
+#    if defined(__FreeBSD__) || defined(__DragonFly__)
 #	 if FUSE_USE_VERSION < 25
 #	     error On FreeBSD API version 25 or greater must be used
 #	 endif
