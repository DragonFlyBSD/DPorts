--- src/util/u_thread.h.orig	2022-01-12 21:32:28 UTC
+++ src/util/u_thread.h
@@ -138,7 +138,7 @@ static inline void u_thread_setname( con
       buf[len] = '\0';
       pthread_setname_np(pthread_self(), buf);
    }
-#elif DETECT_OS_FREEBSD || DETECT_OS_OPENBSD
+#elif DETECT_OS_FREEBSD || DETECT_OS_OPENBSD || DETECT_OS_DRAGONFLY
    pthread_set_name_np(pthread_self(), name);
 #elif DETECT_OS_NETBSD
    pthread_setname_np(pthread_self(), "%s", (void *)name);
