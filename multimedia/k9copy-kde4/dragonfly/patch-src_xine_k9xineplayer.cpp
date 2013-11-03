--- src/xine/k9xineplayer.cpp.intermediate	2013-11-03 13:05:23.340656000 +0000
+++ src/xine/k9xineplayer.cpp
@@ -251,7 +251,8 @@ void k9xinePlayer::init(WId _wid) {
 
     if ((vo_port = xine_open_video_driver(xine,
                                           m_vo.toAscii(), XINE_VISUAL_TYPE_X11, (void *) &vis)) == NULL) {
-        printf("I'm unable to initialize '%s' video driver. Giving up.\n", m_vo.toAscii());
+        printf("I'm unable to initialize '%s' video driver. Giving up.\n",
+		(char *) m_vo.toAscii().data());
         return ;
     }
 
@@ -272,7 +273,7 @@ void k9xinePlayer::play() {
     running=false;
     m_title="";
     if ((!xine_open(stream, m_mrl.toUtf8())) || (!xine_play(stream, 0, 0))) {
-        printf("Unable to open mrl '%s'\n", m_mrl.toUtf8());
+        printf("Unable to open mrl '%s'\n", (char *)m_mrl.toUtf8().data());
         return ;
     }
     QTimer::singleShot (500, this, SLOT (updatePosition ()));
