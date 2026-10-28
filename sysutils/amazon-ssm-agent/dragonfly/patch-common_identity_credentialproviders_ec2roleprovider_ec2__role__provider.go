--- common/identity/credentialproviders/ec2roleprovider/ec2_role_provider.go.orig	2026-10-26 05:42:18 UTC
+++ common/identity/credentialproviders/ec2roleprovider/ec2_role_provider.go
@@ -204,7 +204,7 @@ func (p *EC2RoleProvider) updateEmptyInstanceInformation(ctx context.Context, ss
 	switch goOS {
 	case "windows":
 		input.PlatformType = aws.String(ssm.PlatformTypeWindows)
-	case "linux", "freebsd":
+	case "linux", "freebsd", "dragonfly":
 		input.PlatformType = aws.String(ssm.PlatformTypeLinux)
 	case "darwin":
 		input.PlatformType = aws.String(ssm.PlatformTypeMacOs)
