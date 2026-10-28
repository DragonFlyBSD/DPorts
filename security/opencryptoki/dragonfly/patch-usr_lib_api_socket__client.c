--- usr/lib/api/socket_client.c.orig	2026-10-26 02:22:43 UTC
+++ usr/lib/api/socket_client.c
@@ -160,6 +160,10 @@ int init_socket_data(int socketfd)
                    sizeof(Anchor->ClientCred) - n);
         return FALSE;
     }
+#if defined(__DragonFly__)
+    /* pkcsslotd cannot learn a peer's pid here (no pid in xucred) */
+    Anchor->ClientCred.real_pid = getpid();
+#endif
 
     n = read_all(socketfd, (char *)&Anchor->SocketDataP,
                  sizeof(Anchor->SocketDataP));
