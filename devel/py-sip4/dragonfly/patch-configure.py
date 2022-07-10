--- configure.py.orig	2021-02-26 15:28:41 UTC
+++ configure.py
@@ -141,6 +141,7 @@ def set_build_platform():
         "darwin":       "macx-g++",
         "dgux":         "dgux-g++",
         "freebsd":      "freebsd-g++",
+        "dragonfly":    "freebsd-g++",
         "gnu":          "hurd-g++",
         "hp-ux":        "hpux-acc",
         "irix":         "irix-cc",
