--- server/red-client.c.orig	2017-10-11 08:32:40 UTC
+++ server/red-client.c
@@ -177,10 +177,10 @@ void red_client_migrate(RedClient *clien
 
     spice_printerr("migrate client with #channels %d", g_list_length(client->channels));
     if (!pthread_equal(pthread_self(), client->thread_id)) {
-        spice_warning("client->thread_id (0x%lx) != pthread_self (0x%lx)."
+        spice_warning("client->thread_id (0x%jx) != pthread_self (0x%jx)."
                       "If one of the threads is != io-thread && != vcpu-thread,"
                       " this might be a BUG",
-                      client->thread_id, pthread_self());
+                      (uintmax_t)client->thread_id, (uintmax_t)pthread_self());
     }
     FOREACH_CHANNEL_CLIENT(client, rcc) {
         if (red_channel_client_is_connected(rcc)) {
@@ -196,11 +196,11 @@ void red_client_destroy(RedClient *clien
 
     spice_printerr("destroy client %p with #channels=%d", client, g_list_length(client->channels));
     if (!pthread_equal(pthread_self(), client->thread_id)) {
-        spice_warning("client->thread_id (0x%lx) != pthread_self (0x%lx)."
+        spice_warning("client->thread_id (0x%jx) != pthread_self (0x%jx)."
                       "If one of the threads is != io-thread && != vcpu-thread,"
                       " this might be a BUG",
-                      client->thread_id,
-                      pthread_self());
+                      (uintmax_t)client->thread_id,
+                      (uintmax_t)pthread_self());
     }
     red_client_set_disconnecting(client);
     FOREACH_CHANNEL_CLIENT(client, rcc) {
