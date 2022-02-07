--- src/tl/tl/tlFileUtils.cc.orig	2021-07-23 08:00:26 UTC
+++ src/tl/tl/tlFileUtils.cc
@@ -59,7 +59,7 @@
 
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <sys/sysctl.h>
@@ -842,7 +842,7 @@ get_inst_path_internal ()
     return tl::absolute_path (buffer);
   }
 
-#elif defined (__FreeBSD__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__)
 
   char path[PATH_MAX];
   size_t len = PATH_MAX;
