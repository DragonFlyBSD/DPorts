--- src/pulsecore/iochannel.c.orig
+++ src/pulsecore/iochannel.c
@@ -261,7 +261,7 @@
 
 #ifdef HAVE_CREDS
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
 typedef struct cmsgcred pa_ucred_t;
 #define SCM_CREDENTIALS SCM_CREDS
 #else
@@ -334,7 +334,7 @@
 
     u = (pa_ucred_t*) CMSG_DATA(&cmsg.hdr);
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
     // the kernel fills everything
 #else
     u->pid = getpid();
@@ -457,7 +457,7 @@
                 pa_ucred_t u;
                 pa_assert(cmh->cmsg_len == CMSG_LEN(sizeof(pa_ucred_t)));
                 memcpy(&u, CMSG_DATA(cmh), sizeof(pa_ucred_t));
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
                 ancil_data->creds.gid = u.cmcred_gid;
                 ancil_data->creds.uid = u.cmcred_uid;
 #else
