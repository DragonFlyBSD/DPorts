--- src/main.cpp.orig	2019-05-13 14:06:21 UTC
+++ src/main.cpp
@@ -18,7 +18,11 @@
 #include <wayland-client-protocol.h>
 
 #include "frame-writer.hpp"
+#ifdef __DragonFly__
+typedef bool PulseReaderParams;
+#else
 #include "pulse.hpp"
+#endif
 #include "wlr-screencopy-unstable-v1-client-protocol.h"
 #include "xdg-output-unstable-v1-client-protocol.h"
 
@@ -286,7 +290,9 @@ static void write_loop(FrameWriterParams
     pthread_sigmask(SIG_BLOCK, &sigset, NULL);
 
     int last_encoded_frame = 0;
+#ifndef __DragonFly__
     std::unique_ptr<PulseReader> pr;
+#endif
 
     while(!exit_main_loop)
     {
@@ -308,12 +314,14 @@ static void write_loop(FrameWriterParams
             params.height = buffer.height;
             frame_writer = std::unique_ptr<FrameWriter> (new FrameWriter(params));
 
+#ifndef __DragonFly__
             if (params.enable_audio)
             {
                 pulseParams.audio_frame_size = frame_writer->get_audio_buffer_size();
                 pr = std::unique_ptr<PulseReader> (new PulseReader(pulseParams));
                 pr->start();
             }
+#endif
         }
 
         frame_writer->add_frame((unsigned char*)buffer.data, buffer.base_usec,
@@ -328,9 +336,11 @@ static void write_loop(FrameWriterParams
     }
 
     std::lock_guard<std::mutex> lock(frame_writer_mutex);
+#ifndef __DragonFly__
     /* Free the PulseReader connection first. This way it'd flush any remaining
      * frames to the FrameWriter */
     pr = nullptr;
+#endif
     frame_writer = nullptr;
 }
 
@@ -538,8 +548,10 @@ int main(int argc, char *argv[])
                 break;
 
             case 'a':
+#ifndef __DragonFly__
                 params.enable_audio = true;
                 pulseParams.audio_source = optarg ? strdup(optarg) : NULL;
+#endif
                 break;
 
             case 'p':
