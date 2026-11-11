--- BackendMesh.h.orig
+++ BackendMesh.h
@@ -107,7 +107,7 @@
 	pthread_mutex_t		lock_op_wait_list_lock;
 	void _init();
 	int processBackendCommand(struct mc_header *rhead);
-	void sendCommand(struct mc_header *hcmd) throw (ConnectionException);
+	void sendCommand(struct mc_header *hcmd);
 	void recordLocks(struct bc_lock_op *lop);
 	void recordUnLocks(struct bc_lock_op *lop);
 	void emergencyUnlock();
