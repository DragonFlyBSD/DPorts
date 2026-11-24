--- google_guest_agent/agentcrypto/mtls_mds_dragonfly.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/agentcrypto/mtls_mds_dragonfly.go
@@ -0,0 +1,13 @@
+package agentcrypto
+
+const (
+	// defaultCredsDir is the directory location for MTLS MDS credentials.
+	defaultCredsDir = "/var/run/google-mds-mtls"
+)
+
+var (
+	// certUpdaters is a map of known CA certificate updaters with the local directory paths for certificates.
+	certUpdaters = map[string][]string{
+		"certctl": {"/usr/local/share/certs"},
+	}
+)
