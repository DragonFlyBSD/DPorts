--- server.cpp.orig
+++ server.cpp
@@ -402,7 +402,7 @@
 	if (evs == NULL)
 		mc_log(LOG_CRIT, "Error allocating evs: %s", strerror(errno));
 
-	CRIT_ASSERT((evq = ev_create_queue()) >= 0);
+	CRIT_ASSERT((evq = ev_create_queue()) != NULL);
 	/* Add server sockets to event queue */
 	ne = 0;
 	for (std::list<ServerClientConnection*>::iterator it = connections.begin(); it != connections.end(); it++) {
