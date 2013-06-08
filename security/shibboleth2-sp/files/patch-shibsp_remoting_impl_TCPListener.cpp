
$FreeBSD: security/shibboleth2-sp/files/patch-shibsp_remoting_impl_TCPListener.cpp 300897 2012-07-14 14:29:18Z beat $

--- shibsp/remoting/impl/TCPListener.cpp.orig
+++ shibsp/remoting/impl/TCPListener.cpp
@@ -38,6 +38,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>
+#include <netinet/in.h>
 
 using namespace shibsp;
 using namespace xmltooling;
