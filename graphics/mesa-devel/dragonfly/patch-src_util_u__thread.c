--- src/util/u_thread.c.orig	2026-09-30 21:48:02 UTC
+++ src/util/u_thread.c
@@ -106,7 +106,7 @@
       buf[len] = '\0';
       pthread_setname_np(pthread_self(), buf);
    }
-#elif DETECT_OS_FREEBSD || DETECT_OS_OPENBSD
+#elif DETECT_OS_FREEBSD || DETECT_OS_OPENBSD || DETECT_OS_DRAGONFLY
    pthread_set_name_np(pthread_self(), name);
 #elif DETECT_OS_NETBSD
    pthread_setname_np(pthread_self(), "%s", (void *)name);
