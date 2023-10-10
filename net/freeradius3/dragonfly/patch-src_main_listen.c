--- src/main/listen.c.intermediate	2023-10-05 17:52:54 UTC
+++ src/main/listen.c
@@ -55,7 +55,7 @@ RCSID("$Id: ee73a571aedb81939bb72ac36b65
 #ifdef WITH_TLS
 #include <netinet/tcp.h>
 
-#  if defined __APPLE__ || __FreeBSD__
+#  if defined __APPLE__ || __FreeBSD__ || __DragonFly__
 #    if !defined(SOL_TCP) && defined(IPPROTO_TCP)
 #      define SOL_TCP IPPROTO_TCP
 #    endif
