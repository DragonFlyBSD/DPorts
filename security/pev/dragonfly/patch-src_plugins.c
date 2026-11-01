--- src/plugins.c.orig
+++ src/plugins.c
@@ -167,7 +167,7 @@
 				const char *filename = dir_entry->d_name;
 
 				// TODO(jweyrich): Use macro conditions for each system: .so, .dylib, .dll
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 				const bool possible_plugin = utils_str_ends_with(filename, ".so") != 0;
 #elif defined(__APPLE__)
 				const bool possible_plugin = utils_str_ends_with(filename, ".dylib") != 0;
