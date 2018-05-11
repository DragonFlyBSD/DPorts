--- plugins/liznoo/liznoo.cpp.orig	2014-07-28 18:35:44.000000000 +0000
+++ plugins/liznoo/liznoo.cpp
@@ -30,6 +30,7 @@
 #include "liznoo.h"
 #include <cmath>
 #include <limits>
+#include <functional> // for std::function
 #include <QIcon>
 #include <QAction>
 #include <QTimer>
