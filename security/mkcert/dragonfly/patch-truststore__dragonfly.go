--- truststore_dragonfly.go.orig	2026-10-26 04:53:05 UTC
+++ truststore_dragonfly.go
@@ -0,0 +1,36 @@
+// Copyright 2018 The mkcert Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style
+// license that can be found in the LICENSE file.
+
+package main
+
+import (
+	"log"
+	"os"
+	"path/filepath"
+)
+
+// DragonFly has no certctl(8): the system bundle is the ca_root_nss
+// cert.pem, so only the NSS (Firefox/Chrome) stores are handled.
+var (
+	FirefoxProfiles = []string{os.Getenv("HOME") + "/.mozilla/firefox/*"}
+	NSSBrowsers     = "Firefox and/or Chrome/Chromium"
+
+	SystemTrustFilename string
+	SystemTrustCommand  []string
+	CertutilInstallHelp = "pkg install nss"
+)
+
+func (m *mkcert) systemTrustFilename() string {
+	return SystemTrustFilename
+}
+
+func (m *mkcert) installPlatform() bool {
+	log.Printf("Installing to the system store is not supported on DragonFly, but %s will still work.", NSSBrowsers)
+	log.Printf("You can also manually install the root certificate at %q.", filepath.Join(m.CAROOT, rootName))
+	return false
+}
+
+func (m *mkcert) uninstallPlatform() bool {
+	return false
+}
