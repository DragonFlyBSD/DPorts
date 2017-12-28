--- vendor/golang.org/x/sys/unix/syscall_dragonfly.go.orig	2017-12-20 16:10:20.743376000 +0100
+++ vendor/golang.org/x/sys/unix/syscall_dragonfly.go	2017-12-20 16:11:10.443366000 +0100
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
