--- plugins/cstp/task.h.orig	2014-07-28 18:35:44.000000000 +0000
+++ plugins/cstp/task.h
@@ -29,6 +29,7 @@
 
 #pragma once
 
+#include <functional> // for std::function
 #include <memory>
 #include <QObject>
 #include <QUrl>
