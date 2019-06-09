--- xpra/net/net_util.py.orig	2019-03-19 15:05:11 UTC
+++ xpra/net/net_util.py
@@ -218,6 +218,8 @@ if not WIN32:
         library = "/usr/lib/libc.dylib"
     elif sys.platform.startswith("sunos"):
         library = "libsocket.so.1"
+    elif sys.platform.startswith("dragonfly"):
+        library = "/lib/libc.so.8"
     elif sys.platform.startswith("freebsd"):
         library = "/lib/libc.so.7"
     elif sys.platform.startswith("openbsd"):
