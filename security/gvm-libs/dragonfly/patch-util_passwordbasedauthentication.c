--- util/passwordbasedauthentication.c.orig	2022-10-22 06:15:22 UTC
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
@@ -172,6 +177,8 @@ pba_finalize (struct PBASettings *settin
   free (settings);
 }
 
+#pragma GCC diagnostic push
+#pragma GCC diagnostic ignored "-Wunused-function"
 static int
 pba_is_phc_compliant (const char *setting)
 {
@@ -181,6 +188,7 @@ pba_is_phc_compliant (const char *settin
     }
   return strlen (setting) > 1 && setting[0] == '$';
 }
+#pragma GCC diagnostic pop
 
 #if HAS_CRYPT_R
 char *
@@ -286,4 +294,10 @@ exit:
     free (tmp);
   return result;
 }
+#else
+#pragma GCC diagnostic push
+#pragma GCC diagnostic ignored "-Wunused-parameter"
+char *pba_hash (struct PBASettings *setting, const char *password) { return NULL; }
+enum pba_rc pba_verify_hash (const struct PBASettings *setting, const char *hash, const char *password) { return ERR; }
+#pragma GCC diagnostic pop
 #endif /* #if HAS_CRYPT_R */
