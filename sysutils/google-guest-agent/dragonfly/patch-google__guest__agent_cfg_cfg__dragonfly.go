--- google_guest_agent/cfg/cfg_dragonfly.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/cfg/cfg_dragonfly.go
@@ -0,0 +1,12 @@
+package cfg
+
+const (
+	// InstallPathPrefix is /usr/local for all third-party
+	// software in DragonFly.
+	InstallPathPrefix = "/usr/local"
+
+	// DataPathPrefix is where applications store their persistent,
+	// dynamic data.
+	// In DragonFly, /var/db is designated for this purpose.
+	DataPathPrefix = "/var/db"
+)
