--- icetime/iceutil.cc.orig
+++ icetime/iceutil.cc
@@ -32,7 +32,7 @@
 #  include <unistd.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  include <sys/sysctl.h>
 #endif
 
@@ -51,7 +51,7 @@
 		buflen--;
 	return std::string(path, buflen);
 }
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 std::string proc_self_dirname()
 {
 #ifdef __NetBSD__
