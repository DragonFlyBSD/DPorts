--- ctx.c.orig	2019-02-28 05:43:18 UTC
+++ ctx.c
@@ -83,7 +83,7 @@ static int dill_ismain() {
 }
 #elif defined __OpenBSD__ || defined __FreeBSD__ || \
     defined __APPLE__ || defined __DragonFly__
-#if defined __FreeBSD__ || defined __OpenBSD__
+#if defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <pthread_np.h>
 #endif
 static int dill_ismain() {
