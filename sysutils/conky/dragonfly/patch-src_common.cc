--- src/common.cc.orig	2019-01-08 01:26:24 UTC
+++ src/common.cc
@@ -95,6 +95,10 @@ char *strndup(const char *s, size_t n) {
 }
 #endif /* HAVE_STRNDUP */
 
+#if defined(__DragonFly__)
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#endif
 int update_uname() {
   uname(&info.uname_s);
 
