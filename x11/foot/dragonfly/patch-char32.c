--- char32.c.orig
+++ char32.c
@@ -34,7 +34,7 @@
 #if !defined(__STDC_UTF_32__) || !__STDC_UTF_32__
  #error "char32_t does not use UTF-32"
 #endif
-#if (!defined(__STDC_ISO_10646__) || !__STDC_ISO_10646__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if (!defined(__STDC_ISO_10646__) || !__STDC_ISO_10646__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
  #error "wchar_t does not use UTF-32"
 #endif
 
