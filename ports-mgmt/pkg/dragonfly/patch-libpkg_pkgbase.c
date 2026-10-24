--- libpkg/pkgbase.c.orig
+++ libpkg/pkgbase.c
@@ -91,6 +91,9 @@
 } system_shlib_table[] = {
 	{"/lib", PKG_SHLIB_FLAGS_NONE },
 	{"/usr/lib", PKG_SHLIB_FLAGS_NONE },
+#ifdef __DragonFly__
+	{"/usr/lib/gcc80", PKG_SHLIB_FLAGS_NONE },
+#endif
 	{"/usr/lib32", PKG_SHLIB_FLAGS_COMPAT_32 },
 };
 
