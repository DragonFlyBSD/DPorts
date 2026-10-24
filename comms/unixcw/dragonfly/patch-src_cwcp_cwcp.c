--- src/cwcp/cwcp.c.orig
+++ src/cwcp/cwcp.c
@@ -1732,7 +1732,7 @@
 		}
 	}
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	if (config->audio_system == CW_AUDIO_ALSA
 	    && cw_is_pa_possible(NULL)) {
 
