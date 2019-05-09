--- pafy/pafy.py.intermediate	2019-05-08 21:02:28.000000000 +0000
+++ pafy/pafy.py
@@ -45,7 +45,7 @@ Pafy = None
 backend = "internal"
 if os.environ.get("PAFY_BACKEND") != "internal":
     try:
-        if sys.platform.startswith('freebsd'):
+        if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
             # FreeBSD installs youtube_dl as a zip archive
             sys.path.insert(1, '/usr/local/bin/youtube-dl')
         import youtube_dl
