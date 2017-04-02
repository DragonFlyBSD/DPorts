--- xpra/os_util.py.orig	2016-12-30 06:31:45.000000000 +0200
+++ xpra/os_util.py
@@ -132,6 +132,7 @@ def platform_name(sys_platform, release)
                  "linux.*"  : "Linux",
                  "darwin"   : "Mac OS X",
                  "freebsd.*": "FreeBSD",
+                 "dragonfly.*": "DragonFly",
                  "os2"      : "OS/2",
                  }
     def rel(v):
