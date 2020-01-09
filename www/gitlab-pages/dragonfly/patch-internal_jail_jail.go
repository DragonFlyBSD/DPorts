--- internal/jail/jail.go.intermediate	2020-01-08 15:35:34 UTC
+++ internal/jail/jail.go
@@ -228,7 +228,7 @@ func handleFile(dest string, src pathAnd
 func createCharacterDevice(dest string, src pathAndMode) error {
 	unixMode := uint32(src.mode.Perm() | syscall.S_IFCHR)
 
-	return unix.Mknod(dest, unixMode, uint64(src.rdev))
+	return unix.Mknod(dest, unixMode, src.rdev)
 }
 
 func copyFile(dest, src string, perm os.FileMode) error {
