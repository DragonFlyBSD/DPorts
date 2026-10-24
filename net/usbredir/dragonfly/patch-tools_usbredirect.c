--- tools/usbredirect.c.orig
+++ tools/usbredirect.c
@@ -602,7 +602,9 @@
 
     g_atomic_int_set(&self->event_thread_run, FALSE);
     if (self->event_thread) {
+#if LIBUSB_API_VERSION >= 0x01000105
         libusb_interrupt_event_handler(NULL);
+#endif
         g_thread_join(self->event_thread);
         self->event_thread = NULL;
     }
