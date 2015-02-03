--- src/util.h.orig	2015-01-06 16:44:23 UTC
+++ src/util.h
@@ -41,6 +41,14 @@
 
 #include "http-parser/http_parser.h"
 
+#ifndef SOCK_NONBLOCK
+#define SOCK_NONBLOCK 0
+#endif // !SOCK_NONBLOCK
+
+#ifndef SOCK_CLOEXEC
+#define SOCK_CLOEXEC 0
+#endif // !SOCK_CLOEXEC
+
 namespace nghttp2 {
 
 // The additional HTTP/2 protocol ALPN ID we also supports for our
