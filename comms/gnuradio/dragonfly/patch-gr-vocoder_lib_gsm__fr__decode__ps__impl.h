--- gr-vocoder/lib/gsm_fr_decode_ps_impl.h.orig
+++ gr-vocoder/lib/gsm_fr_decode_ps_impl.h
@@ -14,7 +14,7 @@
 #include <gnuradio/vocoder/gsm_fr_decode_ps.h>
 
 extern "C" {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <gsm.h>
 #else
 #include "gsm.h"
