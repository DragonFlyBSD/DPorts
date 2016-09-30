--- src/common.cc.orig	2016-07-20 16:53:48 UTC
+++ src/common.cc
@@ -95,6 +95,10 @@ char *strndup(const char *s, size_t n)
 }
 #endif /* HAVE_STRNDUP */
 
+#if defined(__DragonFly__)
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#endif
 int update_uname(void)
 {
 	uname(&info.uname_s);
