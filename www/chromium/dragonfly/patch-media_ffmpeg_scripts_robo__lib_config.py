diff --git media/ffmpeg/scripts/robo_lib/config.py media/ffmpeg/scripts/robo_lib/config.py
index 2298a7ff6db1..07566498d4e1 100644
--- media/ffmpeg/scripts/robo_lib/config.py
+++ media/ffmpeg/scripts/robo_lib/config.py
@@ -222,6 +222,8 @@ class RoboConfiguration:
             self._host_operating_system = "openbsd"
         elif platform.system() == "FreeBSD":
             self._host_operating_system = "freebsd"
+        elif platform.system() == "DragonFly":
+            self._host_operating_system = "dragonfly"
         else:
             raise ValueError(f"Unsupported platform: {platform.system()}")
 
