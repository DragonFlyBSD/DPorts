--- src/plugins/select/alps/select_alps.c.orig	2018-05-30 18:31:06 UTC
+++ src/plugins/select/alps/select_alps.c
@@ -101,9 +101,13 @@ void set_node_down_ptr (struct node_reco
 char *uid_to_string (uid_t uid) { return NULL; }
 #endif
 
-#if !defined (SIGRTMIN) && defined(__NetBSD__)
+#if !defined (SIGRTMIN)
+#if defined(__NetBSD__)
 /* protected definition in <sys/signal.h> */
 #  define SIGRTMIN (SIGPWR+1)
+#elif defined(__DragonFly__)
+#  define SIGRTMIN (SIGCKPTEXIT+1)
+#endif
 #endif
 /*
  * SIGRTMIN isn't defined on osx, so lets keep it above the signals in use.
