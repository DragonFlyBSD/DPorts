--- core/src/lib/bnet.cc.orig	2019-12-12 17:04:14 UTC
+++ core/src/lib/bnet.cc
@@ -206,7 +206,7 @@ err:
    return false;
 }
 #else
-bool BnetTlsServer(std::shared_ptr<TlsImplementation> tls_implementation,
+bool BnetTlsServer(/* std::shared_ptr<TlsImplementation> tls_implementation, */
                    BareosSocket *bsock,
                    const std::vector<std::string> &verify_list)
 {
@@ -214,7 +214,7 @@ bool BnetTlsServer(std::shared_ptr<TlsIm
    return false;
 }
 
-bool BnetTlsClient(std::shared_ptr<TLS_IMPLEMENTATION> tls_implementation,
+bool BnetTlsClient(/* std::shared_ptr<TLS_IMPLEMENTATION> tls_implementation, */
                    BareosSocket *bsock,
                    bool VerifyPeer,
                    const std::vector<std::string> &verify_list)
