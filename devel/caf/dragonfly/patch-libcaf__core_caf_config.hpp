--- libcaf_core/caf/config.hpp.orig	2017-01-10 12:26:48 UTC
+++ libcaf_core/caf/config.hpp
@@ -168,7 +168,7 @@
 #  if LINUX_VERSION_CODE <= KERNEL_VERSION(2,6,16)
 #    define CAF_POLL_IMPL
 #  endif
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  define CAF_BSD
 #elif defined(__CYGWIN__)
 #  define CAF_CYGWIN
