--- tools/jdk/jdk.BUILD.orig	Tue Jan  1 00:00:00 1980
+++ tools/jdk/jdk.BUILD	Tue Mar
@@ -39,6 +39,12 @@ filegroup(
 )
 
 filegroup(
+    name = "jni_md_header-dragonfly",
+    srcs = ["include/freebsd/jni_md.h"],
+    deprecation = DEPRECATION_MESSAGE,
+)
+
+filegroup(
     name = "jni_md_header-windows",
     srcs = ["include/win32/jni_md.h"],
     deprecation = DEPRECATION_MESSAGE,
