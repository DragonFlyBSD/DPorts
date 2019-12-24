--- galerautils/src/gu_arch.h.orig	2017-05-25 17:11:36.000000000 +0000
+++ galerautils/src/gu_arch.h	2017-07-06 16:35:48.000000000 +0000
@@ -47,6 +47,8 @@
 # else
 #  define GU_WORDSIZE 32
 # endif
+#elif defined __DragonFly__
+# define GU_WORDSIZE 64
 #elif defined(__APPLE__) || defined(__FreeBSD__)
 # include <stdint.h>
 # define GU_WORDSIZE __WORDSIZE
