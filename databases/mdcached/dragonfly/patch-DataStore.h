--- DataStore.h.orig
+++ DataStore.h
@@ -286,7 +286,7 @@
 
 	static void fill_dh_data(struct dh_data *entry, struct mc_data_entry *inpkt);
 
-	DataStore() throw(MDCacheException);
+	DataStore();
 	~DataStore();
 
 	void set_lock_notifiers(LockNotifier *ilock_notifier, LockNotifier *tlock_notifier);
