
$FreeBSD: head/security/shibboleth2-sp/files/patch-shibsp_remoting_impl_TCPListener.cpp 340725 2014-01-22 17:40:44Z mat $

--- shibsp/remoting/impl/TCPListener.cpp.orig
+++ shibsp/remoting/impl/TCPListener.cpp
@@ -38,6 +38,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>
+#include <netinet/in.h>
 
 using namespace shibsp;
 using namespace xmltooling;
