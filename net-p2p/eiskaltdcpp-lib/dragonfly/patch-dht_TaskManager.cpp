--- dht/TaskManager.cpp.orig
+++ dht/TaskManager.cpp
@@ -46,7 +46,7 @@
     // TimerManagerListener
     void TaskManager::on(TimerManagerListener::Second, uint64_t aTick) throw()
     {
-        if(DHT::getInstance()->isConnected() && DHT::getInstance()->getNodesCount() >= K)
+        if(DHT::getInstance()->isConnected() && DHT::getInstance()->getNodesCount() >= DHT_K)
         {
             if(!DHT::getInstance()->isFirewalled() && IndexManager::getInstance()->getPublish() && aTick >= nextPublishTime)
             {
