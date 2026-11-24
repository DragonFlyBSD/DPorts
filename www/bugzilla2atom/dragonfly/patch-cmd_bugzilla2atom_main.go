--- cmd/bugzilla2atom/main.go.orig	2026-11-19 14:56:03 UTC
+++ cmd/bugzilla2atom/main.go
@@ -156,42 +156,11 @@
 	return xml.Header + string(atom), nil
 }
 
-func limitStream(fd int, read bool) {
-	var rights *unix.CapRights
-	rights, err := unix.CapRightsInit(nil)
-	if err != nil {
-		log.Fatal(err)
-	}
-
-	var additionalRights []uint64
-	if read {
-		additionalRights = []uint64{unix.CAP_READ}
-	} else {
-		additionalRights = []uint64{unix.CAP_WRITE}
-	}
-
-	if err := unix.CapRightsSet(rights, additionalRights); err != nil {
-		log.Fatal(err)
-	}
-
-	if err := unix.CapRightsLimit(uintptr(fd), rights); err != nil && err != unix.ENOSYS {
-		log.Fatal(err)
-	}
-}
-
 func main() {
-	limitStream(unix.Stdin, true)
-	limitStream(unix.Stdout, false)
-	limitStream(unix.Stderr, false)
-
 	if _, _, err := unix.Syscall(unix.SYS_CLOSEFROM, uintptr(unix.Stderr + 1), 0, 0); err != 0 {
 		log.Fatal(err)
 	}
 
-	if err := unix.CapEnter(); err != nil && err != unix.ENOSYS {
-		log.Fatal(err)
-	}
-
 	inXml, err := ioutil.ReadAll(os.Stdin)
 	if err != nil {
 		log.Fatal(err)
