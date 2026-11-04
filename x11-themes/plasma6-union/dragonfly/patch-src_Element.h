--- src/Element.h.orig
+++ src/Element.h
@@ -324,6 +324,8 @@
  *
  * Specialization of std::formatter to support formatting an element as string.
  */
+#if __has_include(<format>)
+#include <format>
 template<>
 struct std::formatter<Union::Element::Ptr, char> : public std::formatter<std::string, char> {
     template<class FormatContext>
@@ -350,3 +352,4 @@
         return std::formatter<std::string, char>::format(string, context);
     }
 };
+#endif
