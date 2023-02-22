--- Source/WebCore/platform/audio/gstreamer/AudioFileReaderGStreamer.cpp.orig	2020-03-04 17:16:37 UTC
+++ Source/WebCore/platform/audio/gstreamer/AudioFileReaderGStreamer.cpp
@@ -230,6 +230,10 @@ void AudioFileReader::handleNewDeinterle
         [](GstAppSink* sink, gpointer userData) -> GstFlowReturn {
             return static_cast<AudioFileReader*>(userData)->handleSample(sink);
         },
+#if GST_CHECK_VERSION(1, 19, 0)
+        // new_event
+        nullptr,
+#endif
         { nullptr }
     };
     gst_app_sink_set_callbacks(GST_APP_SINK(sink), &callbacks, this, 0);
