--- src/storage-node.cc.orig	2006-10-07 01:35:41.000000000 +0300
+++ src/storage-node.cc
@@ -26,6 +26,8 @@
 
 #include <glibmm/utility.h>
 
+#include <cstring> // for strlen
+
 using namespace Guikachu;
 
 StorageNode::StorageNode ():
