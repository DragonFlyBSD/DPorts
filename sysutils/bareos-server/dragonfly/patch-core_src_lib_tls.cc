gHackup for LibreSSL.

--- core/src/lib/tls.cc.orig	2020-02-11 15:58:26 UTC
+++ core/src/lib/tls.cc
@@ -22,6 +22,8 @@
 #include "lib/tls.h"
 #include "lib/tls_openssl.h"
 
+#include <openssl/opensslv.h>
+
 Tls::Tls() { return; }
 
 Tls::~Tls() { return; }
@@ -29,8 +31,10 @@ Tls::~Tls() { return; }
 Tls* Tls::CreateNewTlsContext(Tls::TlsImplementationType type)
 {
   switch (type) {
+#ifndef LIBRESSL_VERSION_NUMBER
     case Tls::TlsImplementationType::kTlsOpenSsl:
       return new TlsOpenSsl();
+#endif
 
     case Tls::TlsImplementationType::kTlsUnknown:
     default:
