--- base/hosts.c.orig	2022-10-22 06:15:22 UTC
+++ base/hosts.c
@@ -34,11 +34,13 @@
 #include <arpa/inet.h> /* for inet_pton, inet_ntop */
 #include <assert.h>    /* for assert */
 #include <ctype.h>     /* for isdigit */
+#if !defined(__DragonFly__)
 #if defined(__FreeBSD__)
 #include <malloc_np.h>
 #else
 #include <malloc.h>
 #endif
+#endif
 #include <netdb.h>      /* for getnameinfo, NI_NAMEREQD */
 #include <stdint.h>     /* for uint8_t, uint32_t */
 #include <stdio.h>      /* for sscanf, perror */
@@ -1476,7 +1478,7 @@ gvm_hosts_resolve (gvm_hosts_t *hosts)
           gvm_vhost_t *vhost;
 
           new = gvm_host_new ();
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	  if (ip6->s6_addr[0] != 0 || ip6->s6_addr[1] != 0
               || ip6->s6_addr[2] != 0xff)
 #else
@@ -1490,7 +1492,7 @@ gvm_hosts_resolve (gvm_hosts_t *hosts)
           else
             {
               new->type = HOST_TYPE_IPV4;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
               memcpy (&new->addr6, &ip6->s6_addr[12], sizeof (new->addr));
 #else
               memcpy (&new->addr6, &ip6->s6_addr32[3], sizeof (new->addr));
@@ -2053,7 +2055,7 @@ gvm_duplicate_host (gvm_host_t *host)
       ret->addr.s_addr = host->addr.s_addr;
       break;
     case HOST_TYPE_IPV6:
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       ret->addr6.__u6_addr = host->addr6.__u6_addr;
 #else
       ret->addr6.__in6_u = host->addr6.__in6_u;
