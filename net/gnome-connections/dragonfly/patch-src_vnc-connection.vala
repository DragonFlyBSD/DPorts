--- src/vnc-connection.vala.orig	2022-04-13 08:37:18 UTC
+++ src/vnc-connection.vala
@@ -126,8 +126,14 @@ namespace Connections {
                 frequency = 44100,
                 nchannels = 2
             });
-            connection.set_audio (new Vnc.AudioPulse ());
-            connection.audio_enable ();
+	    /*
+	     * Do not try to initialize the audio at all for a VNC session
+	     * since our net/gtk-vnc port has PA disabled.
+	     * Maybe implement OSS audio support for gtk-vnc?
+	     *
+	     * connection.set_audio (new Vnc.AudioPulse ());
+	     * connection.audio_enable ();
+	     */
         }
 
         public VncConnection (string uuid) {
