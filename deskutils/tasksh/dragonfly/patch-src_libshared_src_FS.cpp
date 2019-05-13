--- src/libshared/src/FS.cpp.orig	2017-05-09 21:46:38 UTC
+++ src/libshared/src/FS.cpp
@@ -457,6 +457,9 @@ bool File::lock ()
 #ifdef FREEBSD
                     // l_type   l_whence  l_start  l_len  l_pid  l_sysid
     struct flock fl = {F_WRLCK, SEEK_SET, 0,       0,     0,     0 };
+#elif defined(__DragonFly__)
+                    // l_start  l_len     l_pid    l_type   l_whence
+    struct flock fl = {0,       0,        0,       F_WRLCK, SEEK_SET };
 #else
                     // l_type   l_whence  l_start  l_len  l_pid
     struct flock fl = {F_WRLCK, SEEK_SET, 0,       0,     0 };
@@ -477,6 +480,9 @@ void File::unlock ()
 #ifdef FREEBSD
                     // l_type   l_whence  l_start  l_len  l_pid  l_sysid
     struct flock fl = {F_WRLCK, SEEK_SET, 0,       0,     0,     0 };
+#elif defined(__DragonFly__)
+                    // l_start  l_len     l_pid    l_type   l_whence
+    struct flock fl = {0,       0,        0,       F_WRLCK, SEEK_SET };
 #else
                     // l_type   l_whence  l_start  l_len  l_pid
     struct flock fl = {F_WRLCK, SEEK_SET, 0,       0,     0 };
