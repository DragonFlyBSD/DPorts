--- dht/SearchManager.cpp.orig
+++ dht/SearchManager.cpp
@@ -389,7 +389,7 @@
             }
 
             // extract possible nodes
-            unsigned int n = K;
+            unsigned int n = DHT_K;
             while(xml.findChild("Node") && n-- > 0)
             {
                 CID cid = CID(xml.getChildAttrib("CID"));
@@ -437,8 +437,8 @@
      */
     void SearchManager::publishFile(const Node::Map& nodes, const string& tth, int64_t size, bool partial)
     {
-        // send PUB command to K nodes
-        int n = K;
+        // send PUB command to DHT_K nodes
+        int n = DHT_K;
         for(Node::Map::const_iterator i = nodes.begin(); i != nodes.end() && n > 0; ++i, --n)
         {
             const Node::Ptr& node = i->second;
