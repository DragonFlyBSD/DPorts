--- ortools/util/fp_utils.h.orig	2021-03-04 09:29:20.471285000 +0100
+++ ortools/util/fp_utils.h	2021-03-04 09:29:35.201156000 +0100
@@ -84,7 +84,7 @@
     excepts &= FE_ALL_EXCEPT;
 #if defined(__APPLE__)
     fenv_.__control &= ~excepts;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     fenv_.__x87.__control &= ~excepts;
 #else  // Linux
     fenv_.__control_word &= ~excepts;
