--- compat.h.orig	2021-01-10 12:57:35 UTC
+++ compat.h
@@ -18,7 +18,7 @@ extern char **environ;
    connect() -> Connection refused
    connect() -> ok
    instead, it needs close() and socket() between the two connect() attmpts: */
-#if __FreeBSD__ || __APPLE__ || _AIX || __hpux__ || __osf__
+#if __FreeBSD__ || __APPLE__ || _AIX || __hpux__ || __osf__ || __DragonFly__
 #  undef SOCKET_CAN_RECOVER
 #else
 #  define SOCKET_CAN_RECOVER 1
