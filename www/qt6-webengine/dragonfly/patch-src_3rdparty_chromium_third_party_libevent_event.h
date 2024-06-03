diff --git third_party/libevent/event.h third_party/libevent/event.h
index ff8a5395d25..bd79d5652a0 100644
--- src/3rdparty/chromium/third_party/libevent/event.h
+++ src/3rdparty/chromium/third_party/libevent/event.h
@@ -367,6 +367,7 @@ int event_base_set(struct event_base *, struct event *);
 /*@{*/
 #define EVLOOP_ONCE	0x01	/**< Block at most once. */
 #define EVLOOP_NONBLOCK	0x02	/**< Do not block. */
+#define EVLOOP_PRECISE	0x08	/**< Try to implement more precise timeouts. */
 /*@}*/
 
 /**
