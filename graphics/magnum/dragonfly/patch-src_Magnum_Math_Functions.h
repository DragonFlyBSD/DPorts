Don't use such builtin things.

--- src/Magnum/Math/Functions.h.orig	2019-10-24 11:15:03 UTC
+++ src/Magnum/Math/Functions.h
@@ -114,7 +114,7 @@ template<class T> inline T cos(Unit<Rad,
 template<class T> inline T cos(Unit<Deg, T> angle) { return cos(Rad<T>(angle)); }
 #endif
 
-#if defined(__GNUC__) && !defined(__clang__)
+#if defined(__GNUC__) && !defined(__clang__) && !defined(__DragonFly__)
 namespace Implementation {
     /* GCC builtin since 3.4 (https://stackoverflow.com/a/2742861),
        unfortunately either Clang nor MSVC have any alternative which wouldn't
@@ -145,7 +145,7 @@ instruction as well.
 template<class T> inline std::pair<T, T> sincos(Rad<T> angle);
 #else
 template<class T> inline std::pair<T, T> sincos(Unit<Rad, T> angle) {
-    #if defined(__GNUC__) && !defined(__clang__)
+    #if defined(__GNUC__) && !defined(__clang__) && !defined(__DragonFly__)
     std::pair<T, T> out;
     Implementation::sincos(T(angle), out.first, out.second);
     return out;
