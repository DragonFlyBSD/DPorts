--- src/vnc-connection.vala.orig	2026-11-05 11:20:26 UTC
+++ src/vnc-connection.vala
@@ -127,8 +127,7 @@
                 frequency = 44100,
                 nchannels = 2
             });
-            connection.set_audio (new Vnc.AudioPulse ());
-            connection.audio_enable ();
+            // net/gtk-vnc is built without PulseAudio here: no Vnc.AudioPulse.
             authentication_complete.connect (update_display_authenticated);
         }
 
