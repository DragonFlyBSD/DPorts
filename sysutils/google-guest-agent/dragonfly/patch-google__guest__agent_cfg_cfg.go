--- google_guest_agent/cfg/cfg.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/cfg/cfg.go
@@ -421,7 +421,7 @@
 	var defaultConf string
 
 	switch os := runtime.GOOS; os {
-	case "freebsd":
+	case "freebsd", "dragonfly":
 		defaultConf = defaultConfigFreeBSD
 	default:
 		defaultConf = defaultConfig
