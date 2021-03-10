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
 
