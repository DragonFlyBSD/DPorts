diff --git media/ffmpeg/scripts/robo_lib/config.py media/ffmpeg/scripts/robo_lib/config.py
index 84f5b3d38fd9..406d5162784b 100644
--- media/ffmpeg/scripts/robo_lib/config.py
+++ media/ffmpeg/scripts/robo_lib/config.py
@@ -221,6 +221,8 @@ class RoboConfiguration:
             self._host_operating_system = "openbsd"
         elif platform.system() == "FreeBSD":
             self._host_operating_system = "freebsd"
+        elif platform.system() == "DragonFly":
+            self._host_operating_system = "dragonfly"
         else:
             raise ValueError(f"Unsupported platform: {platform.system()}")
 
