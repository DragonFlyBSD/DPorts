--- vendor/github.com/zmap/zcrypto/x509/root_dragonfly.go.orig	2026-10-26 04:55:30 UTC
+++ vendor/github.com/zmap/zcrypto/x509/root_dragonfly.go
@@ -0,0 +1,19 @@
+// Copyright 2015 The Go Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style
+// license that can be found in the LICENSE file.
+
+package x509
+
+// Possible certificate files; stop after finding one (as Go's
+// crypto/x509 root_bsd.go).
+var certFiles = []string{
+	"/usr/local/etc/ssl/cert.pem",
+	"/etc/ssl/cert.pem",
+	"/usr/local/share/certs/ca-root-nss.crt",
+}
+
+// Possible directories with certificate files.
+var certDirectories = []string{
+	"/etc/ssl/certs",
+	"/usr/local/share/certs",
+}
