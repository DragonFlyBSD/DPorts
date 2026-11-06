--- ortools/util/fp_utils.h.orig
+++ ortools/util/fp_utils.h
@@ -89,7 +89,7 @@
     excepts &= FE_ALL_EXCEPT;
 #if defined(__APPLE__)
     fenv_.__control &= ~excepts;
-#elif (defined(__FreeBSD__) || defined(__OpenBSD__))
+#elif (defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__))
     fenv_.__x87.__control &= ~excepts;
 #elif defined(__NetBSD__)
     fenv_.x87.control &= ~excepts;
