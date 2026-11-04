--- src/Selector.h.orig
+++ src/Selector.h
@@ -300,6 +300,8 @@
  *
  * Specialization of std::formatter to support formatting a SelectorList as string.
  */
+#if __has_include(<format>)
+#include <format>
 template<>
 struct std::formatter<Union::SelectorList, char> : public std::formatter<std::string, char> {
     template<class FormatContext>
@@ -309,3 +311,4 @@
         return std::formatter<std::string, char>::format(string, context);
     }
 };
+#endif
