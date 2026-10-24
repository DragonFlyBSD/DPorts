--- util/passwordbasedauthentication.c.orig	2025-10-01 09:22:47 UTC
+++ util/passwordbasedauthentication.c
@@ -14,10 +14,35 @@
 // UFC_crypt defines crypt_r when only when __USE_GNU is set
 // this shouldn't affect other implementations
 #define __USE_GNU
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #if HAS_CRYPT_R
 #include <unistd.h>
 #endif
+#if defined(__DragonFly__)
+#include <pthread.h>
+/* DragonFly has crypt(3) but no crypt_r(); serialise crypt() instead. */
+struct crypt_data
+{
+  char buf[384];
+};
+static char *
+crypt_r (const char *key, const char *salt, struct crypt_data *data)
+{
+  static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
+  char *res;
+
+  pthread_mutex_lock (&lock);
+  res = crypt (key, salt);
+  if (res != NULL)
+    {
+      strncpy (data->buf, res, sizeof (data->buf) - 1);
+      data->buf[sizeof (data->buf) - 1] = '\0';
+      res = data->buf;
+    }
+  pthread_mutex_unlock (&lock);
+  return res;
+}
+#endif
 #else
 #include <crypt.h>
 #endif
