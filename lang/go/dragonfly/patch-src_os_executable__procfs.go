--- src/os/executable_procfs.go.orig	2019-12-04 22:53:55 UTC
+++ src/os/executable_procfs.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build linux netbsd dragonfly nacl js,wasm
+// +build linux netbsd nacl js,wasm
 
 package os
 
@@ -23,8 +23,6 @@ var executablePath, executablePathErr =
 		procfn = "/proc/self/exe"
 	case "netbsd":
 		procfn = "/proc/curproc/exe"
-	case "dragonfly":
-		procfn = "/proc/curproc/file"
 	}
 	return Readlink(procfn)
 }()
