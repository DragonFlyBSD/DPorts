--- SWIG/_m2crypto.i.intermediate	2019-12-28 16:52:49.000000000 +0000
+++ SWIG/_m2crypto.i
@@ -65,7 +65,9 @@ static PyObject *x509_store_verify_cb_fu
 #ifdef _WIN32
 %include <windows.i>
 #endif
+#ifndef LIBRESSL_VERSION_NUMBER
 %include <openssl/e_os2.h>
+#endif
 %include <openssl/safestack.h>
 
 /* Bring in LHASH_OF macro definition */
