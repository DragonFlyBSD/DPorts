--- src/aead.cc.orig
+++ src/aead.cc
@@ -22,6 +22,7 @@
  */
 
 #include <openssl/evp.h>
+#include <stdexcept>
 
 #include <sodium.h>
 #include <cstring>
