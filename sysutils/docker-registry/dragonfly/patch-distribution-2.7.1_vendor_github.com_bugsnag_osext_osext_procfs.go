--- vendor/github.com/bugsnag/osext/osext_procfs.go.orig	2020-07-16 18:30:56.808965000 +0200
+++ vendor/github.com/bugsnag/osext/osext_procfs.go	2020-07-16 18:40:20.180257000 +0200
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build linux netbsd openbsd
+// +build linux netbsd openbsd dragonfly
 
 package osext
 
@@ -20,6 +20,8 @@
 		return os.Readlink("/proc/curproc/exe")
 	case "openbsd":
 		return os.Readlink("/proc/curproc/file")
+	case "dragonfly":
+		return os.Readlink("/proc/curproc/file")
 	}
 	return "", errors.New("ExecPath not implemented for " + runtime.GOOS)
 }
