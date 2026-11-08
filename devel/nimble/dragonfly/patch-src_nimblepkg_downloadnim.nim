--- src/nimblepkg/downloadnim.nim.orig
+++ src/nimblepkg/downloadnim.nim
@@ -143,6 +143,8 @@
       "osx"
     elif defined(freebsd):
       "freebsd"
+    elif defined(dragonfly):
+      "dragonfly"
     elif defined(openbsd):
       "openbsd"
     elif defined(haiku):
