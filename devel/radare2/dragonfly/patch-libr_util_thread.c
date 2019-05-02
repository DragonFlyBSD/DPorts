Not yet.

--- libr/util/thread.c.orig	2019-04-02 22:12:18 UTC
+++ libr/util/thread.c
@@ -93,7 +93,7 @@ R_API bool r_th_getname(RThread *th, cha
 	}
 
 	return true;
-#elif (__FreeBSD__ &&  __FreeBSD_version >= 1200000) || __DragonFly__ /* || __OpenBSD__ TODO after nxt rel. */
+#elif (__FreeBSD__ &&  __FreeBSD_version >= 1200000) /* || __DragonFly__ */ /* || __OpenBSD__ TODO after nxt rel. */
 	pthread_get_name_np (th->tid, name, len);
 	return true;
 #else
