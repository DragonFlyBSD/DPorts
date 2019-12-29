--- SWIG/_lib11_compat.i.orig	2017-10-06 19:46:00 UTC
+++ SWIG/_lib11_compat.i
@@ -8,6 +8,20 @@
  */
 
 %{
+#ifdef LIBRESSL_VERSION_NUMBER
+#include <string.h>
+# define OPENSSL_zalloc(num) \
+        CRYPTO_zalloc(num, __FILE__, __LINE__)
+
+static void *CRYPTO_zalloc(size_t num, const char *file, int line)
+{
+      void *ret = CRYPTO_malloc(num, file, line);
+      if (ret != NULL)
+              memset(ret, 0, num);
+      return ret;
+}
+#endif
+
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
 
 #include <string.h>
