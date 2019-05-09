--- pafy/backend_youtube_dl.py.intermediate	2019-05-08 21:02:28.000000000 +0000
+++ pafy/backend_youtube_dl.py
@@ -8,7 +8,7 @@ if sys.version_info[:2] >= (3, 0):
 else:
     uni = unicode
 
-if sys.platform.startswith('freebsd'):
+if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
     # FreeBSD installs youtube_dl as a zip archive
     sys.path.insert(1, '/usr/local/bin/youtube-dl')
 import youtube_dl
