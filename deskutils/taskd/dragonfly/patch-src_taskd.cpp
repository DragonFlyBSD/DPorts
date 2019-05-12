--- src/taskd.cpp.orig	2015-05-10 21:35:22 UTC
+++ src/taskd.cpp
@@ -91,6 +91,8 @@ int main (int argc, const char** argv)
                 << "openbsd"
 #elif defined (FREEBSD)
                 << "freebsd"
+#elif defined (DRAGONFLY)
+                << "dragonfly"
 #elif defined (NETBSD)
                 << "netbsd"
 #elif defined (LINUX)
