--- index/builder.go.orig
+++ index/builder.go
@@ -296,6 +296,11 @@
 		return ctags
 	}
 
+	// FreeBSD and DragonFly install universal-ctags as uctags.
+	if ctags, err := exec.LookPath("uctags"); err == nil {
+		return ctags
+	}
+
 	return ""
 }
 
