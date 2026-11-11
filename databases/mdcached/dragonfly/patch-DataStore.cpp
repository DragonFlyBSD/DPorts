--- DataStore.cpp.orig
+++ DataStore.cpp
@@ -69,7 +69,7 @@
  * This is the principal data structure, the container of all hash tables
  * and the roots of all the trees. It's two main structures.
  */
-DataStore::DataStore() throw (MDCacheException)
+DataStore::DataStore()
 {
 	for (unsigned i = 0; i < N_ITEM_BUCKETS; i++) {
 		items[i].index = i;
