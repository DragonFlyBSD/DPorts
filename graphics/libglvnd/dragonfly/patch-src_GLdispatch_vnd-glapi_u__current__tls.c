--- src/GLdispatch/vnd-glapi/u_current_tls.c.orig	2021-12-17 15:49:38 UTC
+++ src/GLdispatch/vnd-glapi/u_current_tls.c
@@ -30,7 +30,7 @@
 #include "stub.h"
 
 __thread const void *_glapi_tls_Current[GLAPI_NUM_CURRENT_ENTRIES]
-#if defined(__GLIBC__) || defined(__FreeBSD__)
+#if defined(__GLIBC__) || defined(__FreeBSD__) || defined(__DragonFly__)
     __attribute__((tls_model("initial-exec")))
 #endif
     = {
