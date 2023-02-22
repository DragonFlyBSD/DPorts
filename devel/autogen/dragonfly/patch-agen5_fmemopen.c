--- agen5/fmemopen.c.orig	2018-08-09 18:06:29 UTC
+++ agen5/fmemopen.c
@@ -54,6 +54,10 @@ typedef struct {
  */
 #if defined(HAVE_FOPENCOOKIE)
 
+#ifdef __DragonFly__
+#define off64_t off_t
+#endif
+
    typedef off64_t * seek_off_t;
    typedef int       seek_ret_t;
 
