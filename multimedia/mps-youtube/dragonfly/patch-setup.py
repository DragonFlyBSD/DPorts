--- setup.py.intermediate	2019-05-08 21:09:24.000000000 +0000
+++ setup.py
@@ -66,7 +66,7 @@ options = dict(
     long_description=open("README.rst").read()
 )
 
-if sys.platform.startswith(('freebsd','linux')):
+if sys.platform.startswith(('dragonfly','freebsd','linux')):
     # Install desktop file. Required for mpris on FreeBSD and Ubuntu
     options['data_files'] = [('share/applications/', ['mps-youtube.desktop'])]
 
