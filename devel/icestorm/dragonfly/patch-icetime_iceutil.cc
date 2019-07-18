--- icetime/iceutil.cc.orig	2019-05-26 14:36:28 UTC
+++ icetime/iceutil.cc
@@ -32,7 +32,7 @@
 #  include <unistd.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/sysctl.h>
 #endif
 
@@ -51,7 +51,7 @@ std::string proc_self_dirname()
 		buflen--;
 	return std::string(path, buflen);
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 std::string proc_self_dirname()
 {
 	int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
