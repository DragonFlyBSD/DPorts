--- pkg/disk/stat_bsd.go.orig	2021-06-22 16:01:06.328611000 +0200
+++ pkg/disk/stat_bsd.go	2021-06-22 16:06:09.571633000 +0200
@@ -32,10 +32,10 @@
 	}
 	reservedBlocks := s.Bfree - s.Bavail
 	info = Info{
-		Total:  uint64(s.Bsize) * (s.Blocks - reservedBlocks),
-		Free:   uint64(s.Bsize) * s.Bavail,
-		Files:  s.Files,
-		Ffree:  s.Ffree,
+		Total:  uint64(s.Bsize) * uint64(s.Blocks - reservedBlocks),
+		Free:   uint64(s.Bsize) * uint64(s.Bavail),
+		Files:  uint64(s.Files),
+		Ffree:  uint64(s.Ffree),
 		FSType: getFSType(s.Fstypename[:]),
 	}
 	if info.Free > info.Total {
