--- server/red-channel.c.orig	2017-10-10 10:36:11 UTC
+++ server/red-channel.c
@@ -191,8 +191,8 @@ static void
 red_channel_constructed(GObject *object)
 {
     RedChannel *self = RED_CHANNEL(object);
-    spice_debug("%p: channel type %d id %d thread_id 0x%lx", self,
-                self->priv->type, self->priv->id, self->priv->thread_id);
+    spice_debug("%p: channel type %d id %d thread_id 0x%jx", self,
+                self->priv->type, self->priv->id, (uintmax_t)self->priv->thread_id);
 
     RedChannelClass *klass = RED_CHANNEL_GET_CLASS(self);
 
@@ -467,11 +467,11 @@ void red_channel_remove_client(RedChanne
 
     if (!pthread_equal(pthread_self(), channel->priv->thread_id)) {
         spice_warning("channel type %d id %d - "
-                      "channel->thread_id (0x%lx) != pthread_self (0x%lx)."
+                      "channel->thread_id (0x%jx) != pthread_self (0x%jx)."
                       "If one of the threads is != io-thread && != vcpu-thread, "
                       "this might be a BUG",
                       channel->priv->type, channel->priv->id,
-                      channel->priv->thread_id, pthread_self());
+                      (uintmax_t)channel->priv->thread_id, (uintmax_t)pthread_self());
     }
     spice_return_if_fail(channel);
     link = g_list_find(channel->priv->clients, rcc);
