--- src/3rdparty/chromium/third_party/webrtc/modules/audio_processing/aec3/reverb_model_estimator.h.orig	2023-11-20 12:43:11 UTC
+++ src/3rdparty/chromium/third_party/webrtc/modules/audio_processing/aec3/reverb_model_estimator.h
@@ -11,6 +11,7 @@
 #ifndef MODULES_AUDIO_PROCESSING_AEC3_REVERB_MODEL_ESTIMATOR_H_
 #define MODULES_AUDIO_PROCESSING_AEC3_REVERB_MODEL_ESTIMATOR_H_
 
+#include <memory>
 #include <array>
 #include <vector>
 
