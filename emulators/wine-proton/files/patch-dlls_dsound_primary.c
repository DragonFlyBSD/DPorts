--- dlls/dsound/primary.c.orig	2025-11-06 09:54:15 UTC
+++ dlls/dsound/primary.c
@@ -194,10 +194,10 @@ static HRESULT DSOUND_WaveFormat(DirectSoundDevice *de
         if (FAILED(hr))
             return hr;
 
-        if (device->num_speakers == 0 || mixwfe->Format.nChannels < device->num_speakers) {
-            device->speaker_config = DSOUND_FindSpeakerConfig(device->mmdevice, mixwfe->Format.nChannels);
-            DSOUND_ParseSpeakerConfig(device);
-        } else if (mixwfe->Format.nChannels > device->num_speakers) {
+        device->speaker_config = DSOUND_FindSpeakerConfig(device->mmdevice, mixwfe->Format.nChannels);
+        DSOUND_ParseSpeakerConfig(device);
+
+        if (mixwfe->Format.nChannels > device->num_speakers) {
             mixwfe->Format.nChannels = device->num_speakers;
             mixwfe->Format.nBlockAlign = mixwfe->Format.nChannels * mixwfe->Format.wBitsPerSample / 8;
             mixwfe->Format.nAvgBytesPerSec = mixwfe->Format.nSamplesPerSec * mixwfe->Format.nBlockAlign;
