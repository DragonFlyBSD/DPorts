--- src/wsauth.c.orig
+++ src/wsauth.c
@@ -107,7 +107,7 @@
   const char *aud = "goaccess_ws";
   const char *scope = "report_access";
   char *payload = NULL;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   char hostname[_POSIX_HOST_NAME_MAX + 1];
 #else
   char hostname[HOST_NAME_MAX];
@@ -227,7 +227,7 @@
   enum json_type t = JSON_ERROR;
   size_t len = 0, level = 0;
   enum json_type ctx = JSON_ERROR;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   char hostname[_POSIX_HOST_NAME_MAX + 1] = { 0 };
 #else
   char hostname[HOST_NAME_MAX] = { 0 };
