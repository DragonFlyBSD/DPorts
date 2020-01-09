--- vendor/github.com/karrick/godirwalk/readdir_unix.go.orig	2019-06-17 21:31:57 UTC
+++ vendor/github.com/karrick/godirwalk/readdir_unix.go
@@ -35,14 +35,14 @@ func readdirents(osDirname string, scrat
 		buf := scratchBuffer[:n]
 		for len(buf) > 0 {
 			de = (*syscall.Dirent)(unsafe.Pointer(&buf[0])) // point entry to first syscall.Dirent in buffer
-			buf = buf[de.Reclen:]                           // advance buffer for next iteration through loop
+			nameSlice := nameFromDirent(de)
+			namlen := len(nameSlice)
+			buf = buf[direntReclen(de, uint64(namlen)):]                           // advance buffer for next iteration through loop
 
 			if inoFromDirent(de) == 0 {
 				continue // this item has been deleted, but its entry not yet removed from directory listing
 			}
 
-			nameSlice := nameFromDirent(de)
-			namlen := len(nameSlice)
 			if (namlen == 0) || (namlen == 1 && nameSlice[0] == '.') || (namlen == 2 && nameSlice[0] == '.' && nameSlice[1] == '.') {
 				continue // skip unimportant entries
 			}
@@ -64,6 +64,10 @@ func readdirents(osDirname string, scrat
 	return entries, nil
 }
 
+func direntReclen(_ *syscall.Dirent, nameLength uint64) uint64 {
+       return (16 + nameLength + 1 + 7) &^ 7
+}
+
 func readdirnames(osDirname string, scratchBuffer []byte) ([]string, error) {
 	dh, err := os.Open(osDirname)
 	if err != nil {
@@ -91,14 +95,14 @@ func readdirnames(osDirname string, scra
 		buf := scratchBuffer[:n]
 		for len(buf) > 0 {
 			de = (*syscall.Dirent)(unsafe.Pointer(&buf[0])) // point entry to first syscall.Dirent in buffer
-			buf = buf[de.Reclen:]                           // advance buffer for next iteration through loop
+			nameSlice := nameFromDirent(de)
+			namlen := len(nameSlice)
+			buf = buf[direntReclen(de, uint64(namlen)):]                           // advance buffer for next iteration through loop
 
 			if inoFromDirent(de) == 0 {
 				continue // this item has been deleted, but its entry not yet removed from directory listing
 			}
 
-			nameSlice := nameFromDirent(de)
-			namlen := len(nameSlice)
 			if (namlen == 0) || (namlen == 1 && nameSlice[0] == '.') || (namlen == 2 && nameSlice[0] == '.' && nameSlice[1] == '.') {
 				continue // skip unimportant entries
 			}
