--- src/conky.c.orig	2012-05-04 00:22:21.000000000 +0300
+++ src/conky.c
@@ -117,6 +117,8 @@
 #include "freebsd.h"
 #elif defined(__OpenBSD__)
 #include "openbsd.h"
+#elif defined(__DragonFly__)
+#include "dragonfly.h"
 #endif
 
 #if defined(__FreeBSD_kernel__)
@@ -1015,7 +1017,7 @@ void generate_text_internal(char *p, int
 				get_powerbook_batt_info(p, p_max_size, obj->data.i);
 			}
 #endif /* __linux__ */
-#if (defined(__FreeBSD__) || defined(__linux__))
+#if (defined(__FreeBSD__) || defined(__linux__) || defined(__DragonFly__))
 			OBJ(if_up) {
 				if (!interface_up(obj)) {
 					DO_JUMP;
@@ -5667,13 +5669,13 @@ void initialisation(int argc, char **arg
 	/* handle other command line arguments */
 
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) \
-		|| defined(__NetBSD__)
+		|| defined(__NetBSD__) || defined(__DragonFly__)
 	optind = optreset = 1;
 #else
 	optind = 0;
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	if ((kd = kvm_open("/dev/null", "/dev/null", "/dev/null", O_RDONLY,
 			"kvm_open")) == NULL) {
 		CRIT_ERR(NULL, NULL, "cannot read kvm");
@@ -5960,7 +5962,7 @@ int main(int argc, char **argv)
 	curl_global_cleanup();
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	kvm_close(kd);
 	pthread_mutex_destroy(&kvm_proc_mutex);
 #endif
