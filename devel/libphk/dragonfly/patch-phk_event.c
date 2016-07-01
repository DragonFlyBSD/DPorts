--- phk_event.c.orig	2007-11-10 21:12:19.000000000 +0200
+++ phk_event.c
@@ -446,7 +446,11 @@ PhkEvSchedOne(struct phkevbase *evb)
 			return (ev_sched_timeout(evb, E, t));
 	}
 	evb->disturbed = 0;
+#ifdef __DragonFly__
+	TAILQ_FOREACH_MUTABLE(E, &evb->events, list, E2) {
+#else
 	TAILQ_FOREACH_SAFE(E, &evb->events, list, E2) {
+#endif
 		if (i == 0)
 			break;
 		if (E->ev.fd < 0)
