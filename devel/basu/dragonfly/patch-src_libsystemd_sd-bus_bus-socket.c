--- src/libsystemd/sd-bus/bus-socket.c.orig	2021-01-06 13:56:51 UTC
+++ src/libsystemd/sd-bus/bus-socket.c
@@ -126,7 +126,7 @@ static int bus_socket_write_null_byte(sd
         creds.uid = getuid();
         creds.gid = getgid();
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define SOCKET_CRED_OPTION SCM_CREDS
         struct cmsgcred creds = { 0 };
 #else
@@ -524,7 +524,7 @@ static int bus_socket_process_creds(sd_b
         memcpy(&b->ucred, CMSG_DATA(cmsg), sizeof(struct ucred));
         b->ucred_valid = true;
         return 0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
         if (cmsg->cmsg_level != SOL_SOCKET ||
             cmsg->cmsg_type != SCM_CREDS) {
                 return -ENOSYS;
@@ -554,7 +554,7 @@ static int bus_socket_read_auth(sd_bus *
                 uint8_t buf[CMSG_SPACE(sizeof(int) * BUS_FDS_MAX)];
 #if defined(__linux__)
                 char creds[CMSG_SPACE(sizeof(struct ucred))];
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
                 char creds[CMSG_SPACE(sizeof(struct cmsgcred))];
 #endif
         } control;
