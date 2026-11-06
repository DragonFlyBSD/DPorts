--- common/sys/platform.h.orig	2015-09-17 09:11:18.000000000 +0300
+++ common/sys/platform.h
@@ -48,6 +48,16 @@
 #  endif
 #endif
 
+/* detect DragonFly platform */
+#if defined(__DragonFly__) || defined(__DRAGONFLY__)
+#  if !defined(__DRAGONFLY__)
+#     define __DRAGONFLY__
+#  endif
+#  if !defined(__UNIX__)
+#     define __UNIX__
+#  endif
+#endif
+
 /* detect FreeBSD platform */
 #if defined(__FreeBSD__) || defined(__FREEBSD__)
 #  if !defined(__FREEBSD__)
