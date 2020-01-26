gHackup for LibreSSL.

--- core/src/lib/tls.cc.orig	2019-12-12 17:04:14 UTC
+++ core/src/lib/tls.cc
@@ -22,6 +22,8 @@
 #include "lib/tls.h"
 #include "lib/tls_openssl.h"
 
+#include <openssl/opensslv.h>
+
 Tls::Tls()
 {
    return;
@@ -35,8 +37,10 @@ Tls::~Tls()
 Tls *Tls::CreateNewTlsContext(Tls::TlsImplementationType type)
 {
    switch (type) {
+#ifndef LIBRESSL_VERSION_NUMBER
       case Tls::TlsImplementationType::kTlsOpenSsl:
          return new TlsOpenSsl();
+#endif
 
       case Tls::TlsImplementationType::kTlsUnknown:
       default:
