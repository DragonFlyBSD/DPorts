--- src/xcwcp/application.cc.orig
+++ src/xcwcp/application.cc
@@ -1126,7 +1126,7 @@
 
 void Application::check_audio_system(cw_config_t *config)
 {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	if (config->audio_system == CW_AUDIO_ALSA
 	    && cw_is_pa_possible(NULL)) {
 
