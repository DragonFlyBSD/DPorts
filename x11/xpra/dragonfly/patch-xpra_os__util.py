--- xpra/os_util.py.orig	2019-03-19 15:05:11 UTC
+++ xpra/os_util.py
@@ -65,6 +65,7 @@ LINUX = sys.platform.startswith("linux")
 NETBSD = sys.platform.startswith("netbsd")
 OPENBSD = sys.platform.startswith("openbsd")
 FREEBSD  = sys.platform.startswith("freebsd")
+DRAGONFLY  = sys.platform.startswith("dragonfly")
 
 POSIX = os.name=="posix"
 PYTHON2 = sys.version_info[0]==2
@@ -198,6 +199,7 @@ def platform_name(sys_platform, release=
                  "linux.*"  : "Linux",
                  "darwin"   : "Mac OS X",
                  "freebsd.*": "FreeBSD",
+                 "dragonfly.*": "DragonFly",
                  "os2"      : "OS/2",
                  }
     def rel(v):
@@ -385,6 +387,7 @@ def get_generic_os_name():
             "darwin"    : "osx",
             "win"       : "win32",
             "freebsd"   : "freebsd",
+            "dragonfly" : "dragonfly",
             }.items():
         if sys.platform.startswith(k):
             return v
@@ -821,7 +824,7 @@ def get_peercred(sock):
             log("getsockopt", exc_info=True)
             log.error("Error getting peer credentials: %s", e)
             return None
-    elif FREEBSD:
+    elif FREEBSD or DRAGONFLY:
         #TODO: use getpeereid
         #then pwd to get the gid?
         pass
