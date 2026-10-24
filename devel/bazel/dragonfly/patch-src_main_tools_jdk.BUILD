--- src/main/tools/jdk.BUILD.orig	1979-12-31 23:00:00 UTC
+++ src/main/tools/jdk.BUILD
@@ -26,6 +26,11 @@ filegroup(
 )
 
 filegroup(
+    name = "jni_md_header-dragonfly",
+    srcs = ["include/dragonfly/jni_md.h"],
+)
+
+filegroup(
     name = "java",
     srcs = select({
        ":windows" : ["bin/java.exe"],
