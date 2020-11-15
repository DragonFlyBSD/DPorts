--- src/lib/ecore_con/efl_net_server_unix.c.orig	2020-06-17 07:47:44 UTC
+++ src/lib/ecore_con/efl_net_server_unix.c
@@ -24,7 +24,7 @@
 // blockign forever - as i can't reproduce in the freebsd vm
 // i have, so i'm limited in what to do so this is a
 // workaround to try mitigate this
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 # define BIND_HANG_WORKAROUND 1
 #else
 // only need on freebsd
