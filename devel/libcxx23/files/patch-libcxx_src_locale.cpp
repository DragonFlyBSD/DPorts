--- libcxx/src/locale.cpp.orig
+++ libcxx/src/locale.cpp
@@ -899,7 +899,7 @@
 }
 #else
 const ctype<char>::mask* ctype<char>::classic_table() noexcept {
-#  if defined(__APPLE__) || defined(__FreeBSD__)
+#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   return _DefaultRuneLocale.__runetype;
 #  elif defined(__NetBSD__)
   return _C_ctype_tab_ + 1;
