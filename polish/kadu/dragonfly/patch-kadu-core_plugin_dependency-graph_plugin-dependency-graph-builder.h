--- kadu-core/plugin/dependency-graph/plugin-dependency-graph-builder.h.orig	2017-01-24 21:36:21.000000000 +0000
+++ kadu-core/plugin/dependency-graph/plugin-dependency-graph-builder.h
@@ -20,6 +20,7 @@
 #pragma once
 
 #include <QtCore/QObject>
+#include <functional> // for std::function
 #include <map>
 #include <set>
 
