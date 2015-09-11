--- src/core.c.orig	2012-05-04 00:08:27.000000000 +0300
+++ src/core.c
@@ -75,6 +75,8 @@
 #include "freebsd.h"
 #elif defined(__OpenBSD__)
 #include "openbsd.h"
+#elif defined(__DragonFly__)
+#include "dragonfly.h"
 #endif
 
 #include <string.h>
@@ -326,7 +328,7 @@ struct text_object *construct_text_objec
 			obj->data.i = PB_BATT_STATUS;
 		}
 #endif /* __linux__ */
-#if (defined(__FreeBSD__) || defined(__linux__))
+#if (defined(__FreeBSD__) || defined(__linux__) || defined(__DragonFly__))
 	END OBJ_IF_ARG(if_up, 0, "if_up needs an argument")
 		parse_if_up_arg(obj, arg);
 #endif
@@ -577,7 +579,7 @@ struct text_object *construct_text_objec
 		obj->data.s = strndup(arg, text_buffer_size);
 	END OBJ_IF_ARG(if_mounted, 0, "if_mounted needs an argument")
 		obj->data.s = strndup(arg, text_buffer_size);
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 	END OBJ_IF_ARG(if_running, &update_top, "if_running needs an argument")
 		top_running = 1;
 		obj->data.s = strndup(arg, text_buffer_size);
@@ -1523,7 +1525,7 @@ void free_text_objects(struct text_objec
 					free(data.s);
 				break;
 #endif
-#if (defined(__FreeBSD__) || defined(__linux__))
+#if (defined(__FreeBSD__) || defined(__linux__)) || defined(__DragonFly__)
 			case OBJ_if_up:
 				free_if_up(obj);
 				break;
