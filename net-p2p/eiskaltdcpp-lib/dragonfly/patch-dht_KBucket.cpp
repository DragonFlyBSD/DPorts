--- dht/KBucket.cpp.orig
+++ dht/KBucket.cpp
@@ -183,7 +183,7 @@
         // allow only one same IP:port
         bool isAcceptable = (ipMap.find(ip + ":" + port) == ipMap.end());
 
-        if((nodes.size() < (K * ID_BITS)) && isAcceptable)
+        if((nodes.size() < (DHT_K * ID_BITS)) && isAcceptable)
         {
             nodes.push_back(node);
             node->isInList = true;
@@ -237,7 +237,7 @@
 
         // we should ping oldest node from every bucket here
         // but since we have only one bucket now, simulate it by pinging more nodes
-        unsigned int pingCount = max(K, min((int)2 * K, (int)(nodes.size() / (K * 10)) + 1)); // <-- pings 10 - 20 oldest nodes
+        unsigned int pingCount = max(DHT_K, min((int)2 * DHT_K, (int)(nodes.size() / (DHT_K * 10)) + 1)); // <-- pings 10 - 20 oldest nodes
         unsigned int pinged = 0;
         dcdrun(unsigned int removed = 0);
 
