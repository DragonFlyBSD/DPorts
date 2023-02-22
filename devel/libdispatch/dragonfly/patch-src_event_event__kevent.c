--- src/event/event_kevent.c.orig	2023-02-05 18:35:40 UTC
+++ src/event/event_kevent.c
@@ -529,7 +529,7 @@ _dispatch_kevent_merge_muxed(dispatch_ke
 		// tell _dispatch_unote_unregister_muxed() the kernel half is gone
 		dmn->dmn_kev.flags |= EV_DELETE;
 	}
-	LIST_FOREACH_SAFE(dul, &dmn->dmn_unotes_head, du_link, dul_next) {
+	LIST_FOREACH_MUTABLE(dul, &dmn->dmn_unotes_head, du_link, dul_next) {
 		_dispatch_kevent_merge(_dispatch_unote_linkage_get_unote(dul), ke);
 	}
 }
@@ -2401,7 +2401,7 @@ _dispatch_event_loop_timer_arm(dispatch_
 	}
 #if !NOTE_ABSOLUTE
 	target = range.delay;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	target /= 1000000;
 #endif
 #endif
@@ -3015,7 +3015,7 @@ _dispatch_mach_notify_merge(mach_port_t
 	}
 	os_atomic_store(&DISPATCH_MACH_NOTIFICATION_ARMED(dmn), 0, relaxed);
 
-	LIST_FOREACH_SAFE(dul, &dmn->dmn_unotes_head, du_link, dul_next) {
+	LIST_FOREACH_MUTABLE(dul, &dmn->dmn_unotes_head, du_link, dul_next) {
 		if (os_atomic_load(&DISPATCH_MACH_NOTIFICATION_ARMED(dmn), relaxed)) {
 			dispatch_assert(!final);
 			break;
