--- xpra/net/net_util.py.orig	2016-12-06 12:56:27.000000000 +0200
+++ xpra/net/net_util.py
@@ -176,6 +176,8 @@ if not sys.platform.startswith("win"):
 		library = "/usr/lib/libc.dylib"
 	elif sys.platform.startswith("sunos"):
 		library = "libsocket.so.1"
+	elif sys.platform.startswith("dragonfly"):
+		library = "/lib/libc.so.8"
 	elif sys.platform.startswith("freebsd"):
 		library = "/lib/libc.so.7"
 	elif sys.platform.startswith("openbsd"):
