--- webrtc/modules/audio_processing/aec3/reverb_model_estimator.h.orig	2020-11-27 19:30:53 UTC
+++ webrtc/modules/audio_processing/aec3/reverb_model_estimator.h
@@ -12,6 +12,7 @@
 #define MODULES_AUDIO_PROCESSING_AEC3_REVERB_MODEL_ESTIMATOR_H_
 
 #include <array>
+#include <memory> // for std::unique_ptr
 #include <vector>
 
 #include "absl/types/optional.h"
