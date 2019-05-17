--- setup.py.orig	2019-04-05 19:26:08 UTC
+++ setup.py
@@ -122,7 +122,7 @@ class pcap_build_ext(build_ext):
     # swig_sources ()
 
     def find_swig(self):
-        if os.uname()[0] == "FreeBSD":
+        if os.uname()[0] == "FreeBSD" or os.uname()[0] == "DragonFly":
             return '/usr/local/bin/swig3.0'
         else:
             if 'SWIG' in os.environ:
