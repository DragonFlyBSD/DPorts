--- src/synfig/main.cpp.intermediate	2015-01-03 23:00:13 UTC
+++ src/synfig/main.cpp
@@ -466,7 +466,7 @@ synfig::get_binary_path(const String &fa
 
 	/* Read from /proc/self/exe (symlink) */
 	char* path2 = (char*)malloc(buf_size);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined (__DragonFly__)
 	strncpy(path2, "/proc/curproc/file", buf_size - 1);
 #else
 	strncpy(path2, "/proc/self/exe", buf_size - 1);
@@ -507,7 +507,7 @@ synfig::get_binary_path(const String &fa
 	
 	free(path2);
 
-#if !defined(__FreeBSD__)
+#if ! (defined(__FreeBSD__) || defined(__DragonFly__))
 	if (result == "")
 	{
 		/* readlink() or stat() failed; this can happen when the program is
