--- pipewire-jack/src/pipewire-jack.c.orig
+++ pipewire-jack/src/pipewire-jack.c
@@ -3812,7 +3812,9 @@
 		if ((str = spa_dict_lookup(props, PW_KEY_SEC_PID)) != NULL) {
 			pw_log_debug("%p: pid of \"%s\" is \"%s\"", c, app, str);
 		} else {
 			pw_log_debug("%p: pid of \"%s\" is unknown", c, app);
+			/* DragonFly gives no peer pid; upstream master falls back to 0 too */
+			str = "0";
 		}
 
 		o = alloc_object(c, INTERFACE_Client);
