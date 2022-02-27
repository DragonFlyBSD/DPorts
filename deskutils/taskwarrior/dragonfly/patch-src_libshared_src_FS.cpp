--- src/libshared/src/FS.cpp.orig	2021-10-19 03:51:30 UTC
+++ src/libshared/src/FS.cpp
@@ -527,6 +527,9 @@ bool File::lock ()
 #if defined(DARWIN)
                     // l_start l_len l_pid l_type   l_whence
     struct flock fl = {0,      0,    0,    F_WRLCK, SEEK_SET};
+#elif defined(DRAGONFLY)
+                    // l_start l_len l_pid l_type   l_whence
+    struct flock fl = {0,      0,    0,    F_WRLCK, SEEK_SET};
 #elif defined(FREEBSD)
                     // l_type   l_whence  l_start  l_len  l_pid  l_sysid
     struct flock fl = {F_WRLCK, SEEK_SET, 0,       0,     0,     0 };
@@ -550,6 +553,9 @@ void File::unlock ()
 #if defined(DARWIN)
                     // l_start l_len l_pid l_type   l_whence
     struct flock fl = {0,      0,    0,    F_WRLCK, SEEK_SET};
+#elif defined(DRAGONFLY)
+                    // l_start l_len l_pid l_type   l_whence
+    struct flock fl = {0,      0,    0,    F_WRLCK, SEEK_SET};
 #elif defined(FREEBSD)
                     // l_type   l_whence  l_start  l_len  l_pid  l_sysid
     struct flock fl = {F_WRLCK, SEEK_SET, 0,       0,     0,     0 };
