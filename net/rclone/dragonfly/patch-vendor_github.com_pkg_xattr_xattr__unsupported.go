--- vendor/github.com/pkg/xattr/xattr_unsupported.go.orig	2022-11-08 20:36:57.530212000 +0100
+++ vendor/github.com/pkg/xattr/xattr_unsupported.go	2022-11-08 20:39:00.687475000 +0100
@@ -10,7 +10,7 @@
 
 const (
 	// We need to use the default for non supported operating systems
-	ENOATTR = syscall.ENODATA
+	ENOATTR = syscall.ENOATTR
 )
 
 // XATTR_SUPPORTED will be true if the current platform is supported
