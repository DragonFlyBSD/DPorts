--- dht/Constants.h.orig
+++ dht/Constants.h
@@ -41,7 +41,7 @@
 #define SEARCHSTOREFILE_LIFETIME        20*1000 // 20 seconds                   // how long to try publishing a file
 #define SELF_LOOKUP_TIMER                       4*60*60*1000    // 4 hours              // how often to search for self node
 
-#define K                                                       10                                                              // maximum nodes in one bucket
+#define DHT_K                                                       10                                                              // maximum nodes in one bucket
 
 #define MAX_PUBLISHED_FILES                     200                                                             // max local files to publish
 #define MIN_PUBLISH_FILESIZE            1024 * 1024 // 1 MiB                    // files below this size won't be published
