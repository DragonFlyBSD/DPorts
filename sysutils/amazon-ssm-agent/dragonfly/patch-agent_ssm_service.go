--- agent/ssm/service.go.orig	2026-10-26 05:42:18 UTC
+++ agent/ssm/service.go
@@ -261,7 +261,7 @@ func (svc *sdkService) UpdateInstanceInformation(
 	switch goOS {
 	case "windows":
 		params.PlatformType = aws.String(ssm.PlatformTypeWindows)
-	case "linux", "freebsd":
+	case "linux", "freebsd", "dragonfly":
 		params.PlatformType = aws.String(ssm.PlatformTypeLinux)
 	case "darwin":
 		params.PlatformType = aws.String(ssm.PlatformTypeMacOs)
@@ -321,7 +321,7 @@ func (svc *sdkService) UpdateEmptyInstanceInformation(
 	switch goOS {
 	case "windows":
 		params.PlatformType = aws.String(ssm.PlatformTypeWindows)
-	case "linux", "freebsd":
+	case "linux", "freebsd", "dragonfly":
 		params.PlatformType = aws.String(ssm.PlatformTypeLinux)
 	case "darwin":
 		params.PlatformType = aws.String(ssm.PlatformTypeMacOs)
