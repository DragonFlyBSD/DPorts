--- plugins/pcspeaker/pcspeaker.cpp.orig	2014-12-12 22:35:08 UTC
+++ plugins/pcspeaker/pcspeaker.cpp
@@ -81,7 +81,7 @@ void PCSpeaker::beep(int pitch, int dura
 void PCSpeaker::beep(int pitch, int duration)
 {
 	if (pitch == 0)
-		usleep(static_cast<__useconds_t>(duration * 200));
+		usleep(static_cast<useconds_t>(duration * 200));
 	else
 	{
 		XKeyboardState s;			//save previous sound config
@@ -93,7 +93,7 @@ void PCSpeaker::beep(int pitch, int dura
 		XChangeKeyboardControl(xdisplay, (KBBellPitch | KBBellDuration | KBBellPercent), &v); //set sound config
 		XBell(xdisplay, volume);  		//put sound to buffer
 		XFlush(xdisplay);			//flush buffer (beep)
-		usleep(static_cast<__useconds_t>(pitch * 100));			//wait until sound is played
+		usleep(static_cast<useconds_t>(pitch * 100));			//wait until sound is played
 		v.bell_pitch = static_cast<int>(s.bell_pitch);		//restore previous sound config
 		v.bell_duration = static_cast<int>(s.bell_duration);
 		v.bell_percent = static_cast<int>(s.bell_percent);
