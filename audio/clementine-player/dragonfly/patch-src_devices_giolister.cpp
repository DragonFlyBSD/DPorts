--- src/devices/giolister.cpp.orig	2016-04-19 15:08:35.000000000 +0000
+++ src/devices/giolister.cpp
@@ -18,6 +18,7 @@
 #include "config.h"
 
 #include <memory>
+#include <functional> // for std::placeholders
 
 #include <QFile>
 #include <QStringList>
