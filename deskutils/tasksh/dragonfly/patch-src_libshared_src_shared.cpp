--- src/libshared/src/shared.cpp.orig	2017-05-09 21:46:38 UTC
+++ src/libshared/src/shared.cpp
@@ -802,6 +802,8 @@ std::string osName ()
 {
 #if defined (DARWIN)
   return "Darwin";
+#elif defined(__DragonFly__)
+  return "DragonFly";
 #elif defined (SOLARIS)
   return "Solaris";
 #elif defined (CYGWIN)
