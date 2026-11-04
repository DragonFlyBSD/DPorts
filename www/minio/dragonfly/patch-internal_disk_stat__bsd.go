--- internal/disk/stat_bsd.go.orig	2025-10-15 17:29:55 UTC
+++ internal/disk/stat_bsd.go
@@ -35,10 +35,10 @@
 	}
 	reservedBlocks := s.Bfree - s.Bavail
 	info = Info{
-		Total:  uint64(s.Bsize) * (s.Blocks - reservedBlocks),
-		Free:   uint64(s.Bsize) * s.Bavail,
-		Files:  s.Files,
-		Ffree:  s.Ffree,
+		Total:  uint64(s.Bsize) * uint64(s.Blocks-reservedBlocks),
+		Free:   uint64(s.Bsize) * uint64(s.Bavail),
+		Files:  uint64(s.Files),
+		Ffree:  uint64(s.Ffree),
 		FSType: getFSType(s.Fstypename[:]),
 	}
 	if info.Free > info.Total {
