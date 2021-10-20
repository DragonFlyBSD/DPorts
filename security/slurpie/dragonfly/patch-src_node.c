--- src/node.c.intermediate	2020-11-24 04:52:48.000000000 +0000
+++ src/node.c
@@ -67,7 +67,7 @@ void sleep_mode( void )
       (struct sockaddr *)&global.master.addr,
       &global.master.sa_len );
    FD_SET(global.master.socket, &global.net_fds);
-   strcpy(global.master.ipstr,(u_char *)inet_ntoa(&global.master.addr.sin_addr));
+   strcpy(global.master.ipstr,(u_char *)inet_ntoa(global.master.addr.sin_addr));
 // indicate a first time connect to master
    write( global.master.socket, FIRST_SEND, strlen(FIRST_SEND) );
 }
