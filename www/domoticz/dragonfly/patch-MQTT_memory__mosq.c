--- MQTT/memory_mosq.c.orig	2019-05-10 09:37:55 UTC
+++ MQTT/memory_mosq.c
@@ -25,6 +25,8 @@ Contributors:
 #  if defined(__APPLE__)
 #    include <malloc/malloc.h>
 #    define malloc_usable_size malloc_size
+#  elif defined(__DragonFly__)
+  /* nothing */
 #  elif defined(__FreeBSD__)
 #    include <malloc_np.h>
 #  else
