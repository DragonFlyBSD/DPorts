--- common/thread.cpp.intermediate	2019-09-01 14:03:05.000000000 +0000
+++ common/thread.cpp
@@ -135,7 +135,7 @@ namespace oidn {
       OIDN_WARNING("SetThreadGroupAffinity failed");
   }
 
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
   // --------------------------------------------------------------------------
   // ThreadAffinity - Linux
