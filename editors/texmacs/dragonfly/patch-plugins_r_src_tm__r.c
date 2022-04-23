--- plugins/r/src/tm_r.c.intermediate	2019-06-07 12:56:47.000000000 +0000
+++ plugins/r/src/tm_r.c
@@ -13,7 +13,7 @@
 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/select.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #else
 #if HAVE_PTY_H
