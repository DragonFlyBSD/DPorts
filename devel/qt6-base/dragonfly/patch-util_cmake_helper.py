--- util/cmake/helper.py.orig	2022-09-02 16:13:45 UTC
+++ util/cmake/helper.py
@@ -776,6 +776,7 @@ platform_mapping = {
     "osx": "MACOS",
     "ios": "IOS",
     "freebsd": "FREEBSD",
+    "dragonfly": "FREEBSD",
     "openbsd": "OPENBSD",
     "mingw": "MINGW",
     "netbsd": "NETBSD",
