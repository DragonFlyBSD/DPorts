--- src/cw/cw.c.orig
+++ src/cw/cw.c
@@ -598,7 +598,7 @@
 		}
 	}
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	if (config->audio_system == CW_AUDIO_ALSA
 	    ) {
 	    && cw_is_pa_possible(NULL)) {
