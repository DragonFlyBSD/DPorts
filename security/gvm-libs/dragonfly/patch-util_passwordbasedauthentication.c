--- util/passwordbasedauthentication.c.orig	2021-11-13 15:45:39 UTC
+++ util/passwordbasedauthentication.c
@@ -26,9 +26,14 @@
 // UFC_crypt defines crypt_r when only when __USE_GNU is set
 // this shouldn't affect other implementations
 #define __USE_GNU
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #if HAS_CRYPT_R
 #include <unistd.h>
+// glibc compat
+struct crypt_data {
+	int initialized;    /* For compatibility with glibc. */
+	char    __buf[256]; /* Buffer returned by crypt_r(). */
+};
 #endif
 #else
 #include <crypt.h>
@@ -283,4 +288,7 @@ exit:
     free (tmp);
   return result;
 }
+#else
+char *pba_hash (struct PBASettings *setting, const char *password) { return NULL; }
+enum pba_rc pba_verify_hash (const struct PBASettings *setting, const char *hash, const char *password) { return ERR; }
 #endif /* #if HAS_CRYPT_R */
