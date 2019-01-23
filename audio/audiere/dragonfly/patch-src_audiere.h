--- src/audiere.h.orig	2006-02-14 06:57:01.000000000 +0200
+++ src/audiere.h
@@ -28,6 +28,8 @@
 
 #include <vector>
 #include <string>
+#include <cstring> // strlen memcpy etc
+#include <cstdio>  // for sprintf
 
 #ifdef _MSC_VER
 #pragma warning(disable : 4786)
