--- server.c.orig
+++ server.c
@@ -527,10 +527,28 @@
         return false;
     }
 
+#ifdef SO_DOMAIN
     int const socket_options[] = { SO_DOMAIN, SO_ACCEPTCONN, SO_TYPE };
     int const socket_options_values[] = { AF_UNIX, NON_ZERO_OPT, SOCK_STREAM};
     char const * const socket_options_names[] = { "SO_DOMAIN", "SO_ACCEPTCONN", "SO_TYPE" };
+#else
+    /* No SO_DOMAIN (DragonFly): check the address family with getsockname() */
+    struct sockaddr_storage ss;
+    socklen_t sslen = sizeof(ss);
+    if (getsockname(fd, (struct sockaddr *)&ss, &sslen) == -1) {
+        LOG_ERRNO("failed to read socket address from passed file descriptor");
+        return false;
+    }
+    if (ss.ss_family != AF_UNIX) {
+        LOG_ERR("wrong address family on passed file descriptor");
+        return false;
+    }
 
+    int const socket_options[] = { SO_ACCEPTCONN, SO_TYPE };
+    int const socket_options_values[] = { NON_ZERO_OPT, SOCK_STREAM};
+    char const * const socket_options_names[] = { "SO_ACCEPTCONN", "SO_TYPE" };
+#endif
+
     xassert(ALEN(socket_options) == ALEN(socket_options_values));
     xassert(ALEN(socket_options) == ALEN(socket_options_names));
 
