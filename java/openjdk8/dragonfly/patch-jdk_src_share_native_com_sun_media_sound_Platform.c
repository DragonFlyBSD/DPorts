--- jdk/src/share/native/com/sun/media/sound/Platform.c.orig	2021-01-20 00:41:17 UTC
+++ jdk/src/share/native/com/sun/media/sound/Platform.c
@@ -113,7 +113,7 @@ JNIEXPORT jint JNICALL Java_com_sun_medi
     switch (feature) {
     case com_sun_media_sound_Platform_FEATURE_MIDIIO:
        return com_sun_media_sound_Platform_LIB_MAIN;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     case com_sun_media_sound_Platform_FEATURE_PORTS:
        return com_sun_media_sound_Platform_LIB_ALSA;
     case com_sun_media_sound_Platform_FEATURE_DIRECT_AUDIO:
