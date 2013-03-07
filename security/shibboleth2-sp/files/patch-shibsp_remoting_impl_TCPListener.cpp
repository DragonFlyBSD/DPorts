
$FreeBSD: ports/security/shibboleth2-sp/files/patch-shibsp_remoting_impl_TCPListener.cpp,v 1.2 2012/11/17 06:01:20 svnexp Exp $

--- shibsp/remoting/impl/TCPListener.cpp.orig
+++ shibsp/remoting/impl/TCPListener.cpp
@@ -38,6 +38,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>
+#include <netinet/in.h>
 
 using namespace shibsp;
 using namespace xmltooling;
