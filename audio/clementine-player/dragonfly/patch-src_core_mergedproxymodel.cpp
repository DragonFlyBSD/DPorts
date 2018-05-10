--- src/core/mergedproxymodel.cpp.orig	2016-04-19 15:08:35.000000000 +0000
+++ src/core/mergedproxymodel.cpp
@@ -24,6 +24,7 @@
 #include <QStringList>
 
 #include <limits>
+#include <functional> // for std::placeholders
 
 // boost::multi_index still relies on these being in the global namespace.
 using std::placeholders::_1;
