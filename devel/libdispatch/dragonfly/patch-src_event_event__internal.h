--- src/event/event_internal.h.intermediate	2023-02-05 18:10:08 UTC
+++ src/event/event_internal.h
@@ -125,7 +125,7 @@ _dispatch_timer_flags_from_clock(dispatc
 
 #if defined(_WIN32)
 typedef uintptr_t dispatch_unote_ident_t;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 typedef uintptr_t dispatch_unote_ident_t;
 #else
 typedef uint32_t dispatch_unote_ident_t;
