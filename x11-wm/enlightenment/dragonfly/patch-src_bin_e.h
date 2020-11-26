--- src/bin/e.h.orig	2020-07-26 16:39:12 UTC
+++ src/bin/e.h
@@ -108,7 +108,7 @@ void *alloca (size_t);
 #  include <execinfo.h>
 # endif
 
-# if !defined (__FreeBSD__) && !defined (__OpenBSD__)
+# if !defined (__FreeBSD__) && !defined (__OpenBSD__) && !defined(__DragonFly__)
 #  ifdef HAVE_MALLOC_H
 #   include <malloc.h>
 #  endif
