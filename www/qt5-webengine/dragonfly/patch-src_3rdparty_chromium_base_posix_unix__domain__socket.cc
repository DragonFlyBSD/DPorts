--- src/3rdparty/chromium/base/posix/unix_domain_socket.cc.intermediate	2023-05-09 10:02:28 UTC
+++ src/3rdparty/chromium/base/posix/unix_domain_socket.cc
@@ -8,7 +8,7 @@
 #include <sys/param.h>
 #include <sys/socket.h>
 #include <sys/types.h>
-#include <sys/ucred.h>a
+#include <sys/ucred.h>
 #if !defined(OS_NACL_NONSFI)
 #include <sys/un.h>
 #endif
