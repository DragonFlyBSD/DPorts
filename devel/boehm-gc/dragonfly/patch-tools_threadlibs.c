--- tools/threadlibs.c.orig	2014-06-03 09:08:02.000000000 +0300
+++ tools/threadlibs.c
@@ -42,7 +42,7 @@ int main(void)
 #       ifdef GC_USE_DLOPEN_WRAP
           printf("-ldl ");
 #       endif
-#       if (__FREEBSD_version >= 500000)
+#       if (__FREEBSD_version >= 500000) || defined(__DragonFly__)
           printf("-lpthread\n");
 #       else
           printf("-pthread\n");
