--- vendor/github.com/bugsnag/osext/osext_sysctl.go.orig	2026-10-26 05:04:39 UTC
+++ vendor/github.com/bugsnag/osext/osext_sysctl.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build darwin freebsd
+// +build darwin dragonfly freebsd
 
 package osext
 
@@ -20,6 +20,8 @@ func executable() (string, error) {
 	switch runtime.GOOS {
 	case "freebsd":
 		mib = [4]int32{1 /* CTL_KERN */, 14 /* KERN_PROC */, 12 /* KERN_PROC_PATHNAME */, -1}
+	case "dragonfly":
+		mib = [4]int32{1 /* CTL_KERN */, 14 /* KERN_PROC */, 9 /* KERN_PROC_PATHNAME */, -1}
 	case "darwin":
 		mib = [4]int32{1 /* CTL_KERN */, 38 /* KERN_PROCARGS */, int32(os.Getpid()), -1}
 	}
