--- src/contact.h.orig	2012-04-03 21:24:48.000000000 +0000
+++ src/contact.h
@@ -43,6 +43,8 @@
 #include <netinet/in.h>
 #endif
 
+#include <sys/socket.h>
+
 #include <wocky/wocky.h>
 
 G_BEGIN_DECLS
