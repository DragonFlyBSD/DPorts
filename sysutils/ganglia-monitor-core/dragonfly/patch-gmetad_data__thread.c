--- gmetad/data_thread.c.orig	2015-07-01 19:49:35 UTC
+++ gmetad/data_thread.c
@@ -1,5 +1,6 @@
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <unistd.h>
 #include <sys/ioctl.h>
 #include <sys/poll.h>
@@ -39,7 +40,7 @@ data_thread ( void *arg )
    double random_factor;
    unsigned int rand_seed;
 
-   rand_seed = apr_time_now() * (int)pthread_self();
+   rand_seed = apr_time_now() * (int)(uintptr_t)pthread_self();
    for(i = 0; d->name[i] != 0; rand_seed = rand_seed * d->name[i++]);
  
    if(get_debug_msg_level())
