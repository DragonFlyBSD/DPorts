--- agent/platform/platform_unix.go.orig	2026-10-26 05:42:18 UTC
+++ agent/platform/platform_unix.go
@@ -216,7 +216,7 @@ func getPlatformDetails(log log.T) (name string, version string, err error) {
 				version = strings.TrimSpace(versionData[0])
 			}
 		}
-	} else if runtime.GOOS == "freebsd" {
+	} else if runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly" {
 		log.Debugf(fetchingDetailsMessage, unameCommand)
 
 		if contentsBytes, err = exec.Command(unameCommand, "-sr").Output(); err != nil {
