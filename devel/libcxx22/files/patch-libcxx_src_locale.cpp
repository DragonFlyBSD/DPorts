--- libcxx/src/locale.cpp.orig	2026-09-08 21:30:00 UTC
+++ libcxx/src/locale.cpp
@@ -898,7 +898,7 @@
 }
 #else
 const ctype<char>::mask* ctype<char>::classic_table() noexcept {
-#  if defined(__APPLE__) || defined(__FreeBSD__)
+#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   return _DefaultRuneLocale.__runetype;
 #  elif defined(__NetBSD__)
   return _C_ctype_tab_ + 1;
