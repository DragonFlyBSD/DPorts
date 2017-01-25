--- src/netmap_plugin/netmap_collector.cpp.orig	2016-06-22 08:22:26.000000000 +0300
+++ src/netmap_plugin/netmap_collector.cpp
@@ -30,7 +30,7 @@
 #include <net/netmap_user.h>
 #include <boost/thread.hpp>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // On FreeBSD function pthread_attr_setaffinity_np declared here
 #include <pthread_np.h>
 
