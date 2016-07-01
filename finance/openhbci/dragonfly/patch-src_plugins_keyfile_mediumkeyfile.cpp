--- src/plugins/keyfile/mediumkeyfile.cpp.orig	2004-01-13 23:19:39.000000000 +0200
+++ src/plugins/keyfile/mediumkeyfile.cpp
@@ -28,6 +28,8 @@
 #define MEDIUMKEYFILE_VERSION_MAJOR 1
 #define MEDIUMKEYFILE_VERSION_MINOR 1
 
+#include <cstdlib> // for atoi
+#include <cstring>
 #include "deskey.h"
 #include "hbcistring.h"
 #include "file.h"
