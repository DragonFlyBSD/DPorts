--- fltmod/nmsg_flt_sample.c.orig	2019-11-05 15:40:52 UTC
+++ fltmod/nmsg_flt_sample.c
@@ -22,6 +22,7 @@
 #include <stdint.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <strings.h>
 
@@ -220,7 +221,7 @@ sample_thread_init(void *mod_data, void
 	/* Initialize state->xsubi, seed for this thread's random generator. */
 	struct timeval tv = {0};
 	gettimeofday(&tv, NULL);
-	uint32_t seed = (unsigned) tv.tv_sec + (unsigned) tv.tv_usec + (unsigned) pthread_self();
+	uint32_t seed = (unsigned) tv.tv_sec + (unsigned) tv.tv_usec + (uintptr_t) pthread_self();
 	memcpy(state->xsubi, &seed, sizeof(seed));
 
 	switch (sopt->type) {
