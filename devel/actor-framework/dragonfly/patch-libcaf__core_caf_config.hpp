--- libcaf_core/caf/config.hpp.orig
+++ libcaf_core/caf/config.hpp
@@ -151,6 +151,8 @@
 #elif defined(__FreeBSD__)
 #  define CAF_BSD
 #  define CAF_FREE_BSD
+#elif defined(__DragonFly__)
+#  define CAF_BSD
 #elif defined(__NetBSD__)
 #  define CAF_BSD
 #  define CAF_NET_BSD
