Not yet.

--- libr/util/thread.c.orig	2019-05-15 10:39:46 UTC
+++ libr/util/thread.c
@@ -85,7 +85,7 @@ R_API bool r_th_getname(RThread *th, cha
 		eprintf ("Failed to get thread name\n");
 		return false;
 	}
-#elif (__FreeBSD__ &&  __FreeBSD_version >= 1200000) || __DragonFly__ /* || __OpenBSD__ TODO after nxt rel. */
+#elif (__FreeBSD__ &&  __FreeBSD_version >= 1200000) /* || __DragonFly__ */ /* || __OpenBSD__ TODO after nxt rel. */
 	pthread_get_name_np (th->tid, name, len);
 #else
 #pragma message("warning r_th_getname not implemented")
