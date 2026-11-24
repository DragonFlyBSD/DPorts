--- src/admin.c.orig
+++ src/admin.c
@@ -419,6 +419,8 @@
 
 #if defined(HAVE_OSX)
 #define PGAGROAL_GETENV(name) getenv(name)
+#elif defined(__DragonFly__)
+#define PGAGROAL_GETENV(name) (issetugid() ? NULL : getenv(name))
 #else
 #define PGAGROAL_GETENV(name) secure_getenv(name)
 #endif
