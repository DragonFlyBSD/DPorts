--- src/3rdparty/chromium/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h
@@ -43,6 +43,10 @@
 
 #include <errno.h>
 
+#if defined(__Userspace_os_DragonFly)
+#include <sys/param.h>
+#endif
+
 #if defined(_WIN32)
 #include <winsock2.h>
 #include <ws2tcpip.h>
