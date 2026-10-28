--- vendor/github.com/barasher/go-exiftool/platform_dragonfly.go.orig	2026-10-26 04:57:54 UTC
+++ vendor/github.com/barasher/go-exiftool/platform_dragonfly.go
@@ -0,0 +1,7 @@
+package exiftool
+
+var readyToken = []byte("{ready}\n")
+
+const writeMetadataSuccessToken = "image files updated\n"
+
+var exiftoolBinary = "exiftool"
