diff --git third_party/libevent/event-internal.h third_party/libevent/event-internal.h
index b7f00402be5..64e07ba2f0d 100644
--- third_party/libevent/event-internal.h
+++ third_party/libevent/event-internal.h
@@ -68,6 +68,8 @@ struct event_base {
 	struct min_heap timeheap;
 
 	struct timeval tv_cache;
+
+	int is_precise;
 };
 
 /* Internal use only: Functions that might be missing from <sys/queue.h> */
