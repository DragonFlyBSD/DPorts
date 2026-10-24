--- src/findlib/fstype.c.orig
+++ src/findlib/fstype.c
@@ -99,7 +99,8 @@
 #if defined(HAVE_DARWIN_OS) \
    || defined(HAVE_FREEBSD_OS ) \
    || defined(HAVE_KFREEBSD_OS ) \
-   || defined(HAVE_OPENBSD_OS)
+   || defined(HAVE_OPENBSD_OS) \
+   || defined(__DragonFly__)
 
 #include <sys/param.h>
 #include <sys/mount.h>
