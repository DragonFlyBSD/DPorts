--- src/ptclib/pssl.cxx.orig	2008-09-15 08:26:42.000000000 +0000
+++ src/ptclib/pssl.cxx
@@ -800,7 +800,11 @@ PSSLContext::PSSLContext(const void * se
 void PSSLContext::Construct(Method method, const void * sessionId, PINDEX idSize)
 {
   // create the new SSL context
+#ifdef __DragonFly__
+  const SSL_METHOD * meth;
+#else
   SSL_METHOD * meth;
+#endif
 
   switch (method) {
     case SSLv2:
