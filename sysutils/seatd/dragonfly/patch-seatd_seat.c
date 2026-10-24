--- seatd/seat.c.orig
+++ seatd/seat.c
@@ -128,6 +128,10 @@
 	return 0;
 }
 
+// Forward declaration: seat_disable_client is defined below but used by
+// seat_add_client for the VT-less greeter->session seat handoff.
+static int seat_disable_client(struct client *client);
+
 /*
  * seat_activate opens the next client on the seat, assuming no client is
  * currently active.
@@ -246,6 +250,20 @@
 	linked_list_insert(&seat->clients, &client->link);
 
 	log_infof("Added client %d to %s", client->session, seat->seat_name);
+
+	// DragonFly/VT-less: there is no VT switch or logind ActivateSession to
+	// coordinate the greeter->user-session seat handoff. When a new client
+	// joins a seat that already has an active client, hand the seat to the
+	// newcomer: queue it and disable the current client, which deactivates
+	// its devices and (once it acks) lets seat_activate open the newcomer.
+	if (!seat->vt_bound && seat->active_client != NULL &&
+	    seat->active_client->state == CLIENT_ACTIVE && seat->next_client == NULL) {
+		seat->next_client = client;
+		if (seat_disable_client(seat->active_client) == -1) {
+			seat->next_client = NULL;
+			log_error("Could not disable active client to hand off the seat");
+		}
+	}
 
 	return 0;
 }
