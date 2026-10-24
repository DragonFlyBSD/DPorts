--- src/jdk.hotspot.agent/bsd/native/libsaproc/libproc_impl.c.orig	2021-09-14 03:59:48 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/libproc_impl.c
@@ -21,7 +21,11 @@
  * questions.
  *
  */
+#if defined(__DragonFly__)
+#include "libproc.h"
+#else
 #include <proc_service.h>
+#endif
 #include "libproc_impl.h"
 #include "jni.h"
 #include "jni_md.h"
@@ -621,7 +625,7 @@ ps_plog (const char *format, ...)
   va_end(alist);
 }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // ------------------------------------------------------------------------
 // Functions below this point are not yet implemented. They are here only
 // to make the linker happy.
@@ -660,4 +664,4 @@ ps_pcontinue(struct ps_prochandle *ph) {
   print_debug("ps_pcontinue not implemented\n");
   return PS_OK;
 }
-#endif // __FreeBSD__
+#endif // __FreeBSD__ || __DragonFly__
