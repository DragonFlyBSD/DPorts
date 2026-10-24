--- libcxx/include/__locale_dir/get_c_locale.h.orig	2026-09-08 21:30:00 UTC
+++ libcxx/include/__locale_dir/get_c_locale.h
@@ -22,7 +22,7 @@
 
 // FIXME: This should really be part of the locale base API
 
-#  if defined(__APPLE__) || defined(__FreeBSD__)
+#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #    define _LIBCPP_GET_C_LOCALE 0
 #  elif defined(__NetBSD__)
 #    define _LIBCPP_GET_C_LOCALE LC_C_LOCALE
