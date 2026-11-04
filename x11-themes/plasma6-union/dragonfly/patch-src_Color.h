--- src/Color.h.orig
+++ src/Color.h
@@ -238,6 +238,8 @@
  *
  * Specialization of std::formatter to support formatting an element as string.
  */
+#if __has_include(<format>)
+#include <format>
 template<>
 struct std::formatter<Union::Color, char> : public std::formatter<std::string, char> {
     template<class FormatContext>
@@ -247,6 +249,7 @@
         return std::formatter<std::string, char>::format(string, context);
     }
 };
+#endif
 
 Q_DECLARE_TYPEINFO(Union::Color, Q_RELOCATABLE_TYPE);
 Q_DECLARE_METATYPE(Union::Color)
