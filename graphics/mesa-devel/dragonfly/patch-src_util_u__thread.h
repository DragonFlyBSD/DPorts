--- src/util/u_thread.h.orig	2021-06-15 12:49:06.371343000 +0200
+++ src/util/u_thread.h	2021-06-15 12:49:34.200714000 +0200
@@ -113,7 +113,7 @@
       buf[len] = '\0';
       pthread_setname_np(pthread_self(), buf);
    }
-#elif DETECT_OS_FREEBSD || DETECT_OS_OPENBSD
+#elif DETECT_OS_FREEBSD || DETECT_OS_OPENBSD || DETECT_OS_DRAGONFLY
    pthread_set_name_np(pthread_self(), name);
 #elif DETECT_OS_NETBSD
    pthread_setname_np(pthread_self(), "%s", (void *)name);
