--- spectrwm.c.intermediate	2014-06-21 08:41:02.556902000 +0000
+++ spectrwm.c
@@ -69,6 +69,8 @@
 #include <sys/tree.h>
 #elif defined(__FreeBSD__)
 #include <sys/tree.h>
+#elif defined(__DragonFly__)
+#include <sys/tree.h>
 #else
 #include "tree.h"
 #endif
@@ -3573,7 +3575,7 @@ focus_win(struct ws_win *win)
 				map_window(parent);
 
 				/* Map siblings next. */
-				TAILQ_FOREACH_SAFE(w, &ws->stack, stack_entry,
+				TAILQ_FOREACH_MUTABLE(w, &ws->stack, stack_entry,
 				    tmpw)
 					if (w != win && !ICONIC(w) &&
 					    w->transient == parent->id) {
@@ -3587,7 +3589,7 @@ focus_win(struct ws_win *win)
 			map_window(win);
 
 			/* Stack any children of focus window. */
-			TAILQ_FOREACH_SAFE(w, &ws->stack, stack_entry, tmpw)
+			TAILQ_FOREACH_MUTABLE(w, &ws->stack, stack_entry, tmpw)
 				if (w->transient == win->id && !ICONIC(w)) {
 					raise_window(w);
 					map_window(w);
@@ -4984,7 +4986,7 @@ max_stack(struct workspace *ws, struct s
 	if (TRANS(win) && (parent = find_window(win->transient))) {
 		raise_window(parent);
 
-		TAILQ_FOREACH_SAFE(w, &ws->stack, stack_entry, tmpw)
+		TAILQ_FOREACH_MUTABLE(w, &ws->stack, stack_entry, tmpw)
 			if (w->transient == parent->id)
 				raise_window(w);
 	}
@@ -4993,7 +4995,7 @@ max_stack(struct workspace *ws, struct s
 	raise_window(win);
 
 	/* Stack any children of focus window. */
-	TAILQ_FOREACH_SAFE(w, &ws->stack, stack_entry, tmpw)
+	TAILQ_FOREACH_MUTABLE(w, &ws->stack, stack_entry, tmpw)
 		if (w->transient == win->id)
 			raise_window(w);
 
