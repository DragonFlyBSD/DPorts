--- src/3rdparty/chromium/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h
@@ -43,6 +43,10 @@
 
 #include <errno.h>
 
+#if defined(__Userspace_os_DragonFly)
+#include <sys/param.h>
+#endif
+
 #if defined(__Userspace_os_Windows)
 #include <winsock2.h>
 #include <ws2tcpip.h>
