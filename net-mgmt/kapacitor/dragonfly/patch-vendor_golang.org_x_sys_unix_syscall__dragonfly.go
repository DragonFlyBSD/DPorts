--- vendor/golang.org/x/sys/unix/syscall_dragonfly.go.orig	2018-08-06 21:13:09 UTC
+++ vendor/golang.org/x/sys/unix/syscall_dragonfly.go
@@ -57,7 +57,7 @@
 }
 
 func direntIno(buf []byte) (uint64, bool) {
-	return readInt(buf, unsafe.Offsetof(Dirent{}.Ino), unsafe.Sizeof(Dirent{}.Ino))
+	return readInt(buf, unsafe.Offsetof(Dirent{}.Fileno), unsafe.Sizeof(Dirent{}.Fileno))
 }
 
 func direntReclen(buf []byte) (uint64, bool) {
@@ -65,7 +65,7 @@
 	if !ok {
 		return 0, false
 	}
-	return (16 + namlen + 1 + 7) & ^7, true
+	return (16 + namlen + 1 + 7) &^ 7, true
 }
 
 func direntNamlen(buf []byte) (uint64, bool) {
