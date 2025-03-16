diff --git third_party/libevent/event.h third_party/libevent/event.h
index f4a8b9f72f13..0af59aca0be4 100644
--- third_party/libevent/event.h
+++ third_party/libevent/event.h
@@ -364,6 +364,7 @@ int event_base_set(struct event_base *, struct event *);
 /*@{*/
 #define EVLOOP_ONCE	0x01	/**< Block at most once. */
 #define EVLOOP_NONBLOCK	0x02	/**< Do not block. */
+#define EVLOOP_PRECISE	0x08	/**< Try to implement more precise timeouts. */
 /*@}*/
 
 /**
