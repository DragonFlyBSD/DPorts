--- gr-vocoder/lib/gsm_fr_decode_ps_impl.h.intermediate	2019-05-03 13:30:43 UTC
+++ gr-vocoder/lib/gsm_fr_decode_ps_impl.h
@@ -26,7 +26,7 @@
 #include <gnuradio/vocoder/gsm_fr_decode_ps.h>
 
 extern "C"{
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <gsm.h>
 #else
 #include "gsm/gsm.h"
