diff --git third_party/libevent/event.c third_party/libevent/event.c
index 4aa326e0e46..f3d0db6adf0 100644
--- third_party/libevent/event.c
+++ third_party/libevent/event.c
@@ -165,6 +165,8 @@ event_base_new(void)
 		event_err(1, "%s: calloc", __func__);
 
 	gettime(base, &base->event_tv);
+
+	base->is_precise = 0;
 	
 	min_heap_ctor(&base->timeheap);
 	TAILQ_INIT(&base->eventqueue);
@@ -509,7 +511,11 @@ event_base_loop(struct event_base *base, int flags)
 		/* clear time cache */
 		base->tv_cache.tv_sec = 0;
 
+		if (flags & EVLOOP_PRECISE)
+			base->is_precise = 1;
 		res = evsel->dispatch(base, evbase, tv_p);
+		if (flags & EVLOOP_PRECISE)
+			base->is_precise = 0;
 
 		if (res == -1)
 			return (-1);
