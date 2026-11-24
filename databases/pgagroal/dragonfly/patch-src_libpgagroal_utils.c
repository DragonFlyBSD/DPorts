--- src/libpgagroal/utils.c.orig
+++ src/libpgagroal/utils.c
@@ -1524,6 +1524,8 @@
 {
 #if defined(HAVE_DARWIN) || defined(HAVE_OSX)
 #define GET_ENV(name) getenv(name)
+#elif defined(__DragonFly__)
+#define GET_ENV(name) (issetugid() ? NULL : getenv(name))
 #else
 #define GET_ENV(name) secure_getenv(name)
 #endif
