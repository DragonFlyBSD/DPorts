--- src/Main.cc.orig	2015-12-27 12:07:32.000000000 +0200
+++ src/Main.cc
@@ -43,6 +43,8 @@
 #include <config.h>
 #define DRAGONVERSION PACKAGE_VERSION
 
+#include <cstdlib> // for exit()
+
 int main(int argc, char** argv)
 {
 
