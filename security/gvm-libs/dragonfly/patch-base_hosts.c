--- base/hosts.c.intermediate	2021-03-10 13:50:11.000000000 +0000
+++ base/hosts.c
@@ -38,7 +38,9 @@
 #include <stdint.h>     /* for uint8_t, uint32_t */
 #include <stdio.h>      /* for sscanf, perror */
 #include <stdlib.h>     /* for strtol, atoi */
+#if !defined(__DragonFly__)
 #include <malloc_np.h>
+#endif
 #include <string.h>     /* for strchr, memcpy, memcmp, bzero, strcasecmp */
 #include <sys/socket.h> /* for AF_INET, AF_INET6, sockaddr */
 
@@ -2034,7 +2036,7 @@ gvm_duplicate_host (gvm_host_t *host)
       ret->addr.s_addr = host->addr.s_addr;
       break;
     case HOST_TYPE_IPV6:
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
       ret->addr6.__u6_addr = host->addr6.__u6_addr;
 #else
       ret->addr6.__in6_u = host->addr6.__in6_u;
