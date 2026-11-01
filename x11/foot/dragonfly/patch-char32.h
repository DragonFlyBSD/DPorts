--- char32.h.orig
+++ char32.h
@@ -8,6 +8,13 @@
 #include <wchar.h>
 #include <wctype.h>
 
+#if defined(__DragonFly__)
+/* DragonFly's mbrtoc32() and c32rtomb() fail with EINVAL in every locale;
+ * its wchar_t holds UTF-32 like char32_t, so use the wide-char calls. */
+#define mbrtoc32(pc32, s, n, ps) mbrtowc((wchar_t *)(pc32), (s), (n), (ps))
+#define c32rtomb(s, c32, ps) wcrtomb((s), (wchar_t)(c32), (ps))
+#endif
+
 #if defined(FOOT_GRAPHEME_CLUSTERING)
  #include <utf8proc.h>
 #endif
