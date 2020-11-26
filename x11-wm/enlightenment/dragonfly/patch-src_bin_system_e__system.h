--- src/bin/system/e_system.h.orig	2020-07-26 16:39:12 UTC
+++ src/bin/system/e_system.h
@@ -65,13 +65,13 @@ void *alloca (size_t);
 # include <inttypes.h>
 # include <assert.h>
 # include <fcntl.h>
-# if !defined (__FreeBSD__) && !defined (__OpenBSD__)
+# if !defined (__FreeBSD__) && !defined (__OpenBSD__) && !defined(__DragonFly__)
 #  ifdef HAVE_MALLOC_H
 #   include <malloc.h>
 #  endif
 # endif
 
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 # include <sys/sysctl.h>
 #endif
 
