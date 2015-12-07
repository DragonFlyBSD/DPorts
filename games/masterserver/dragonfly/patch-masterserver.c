--- masterserver.c.orig	2005-05-21 21:34:28.000000000 +0300
+++ masterserver.c
@@ -39,7 +39,7 @@
 #if defined(SOLARIS)
 #include <sys/time.h>
 #include <limits.h>		// PATH_MAX
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <limits.h>
 #endif
 
@@ -181,7 +181,11 @@ load_plugins(char *masterserver_plugin_d
 			continue;
 
 		snprintf(path,
+#ifdef __DragonFly__
+			strlen(masterserver_plugin_dir)+_DIRENT_RECLEN(plugin_dir_entry->d_namlen)+2,
+#else
 			strlen(masterserver_plugin_dir)+plugin_dir_entry->d_reclen+2,
+#endif
 			"%s/%s", masterserver_plugin_dir, plugin_dir_entry->d_name);
 		DEBUG("path: \"%s\"\n", path);
 
