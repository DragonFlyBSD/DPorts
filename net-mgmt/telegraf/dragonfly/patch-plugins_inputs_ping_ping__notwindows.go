--- plugins/inputs/ping/ping_notwindows.go.orig	2026-11-19 14:30:51 UTC
+++ plugins/inputs/ping/ping_notwindows.go
@@ -51,7 +51,7 @@
 
 		var timeoutExitCode int
 		switch runtime.GOOS {
-		case "freebsd", "netbsd", "openbsd", "darwin":
+		case "dragonfly", "freebsd", "netbsd", "openbsd", "darwin":
 			timeoutExitCode = 2
 		case "linux":
 			timeoutExitCode = 1
@@ -128,7 +128,7 @@
 			} else {
 				args = append(args, "-W", strconv.FormatFloat(timeout*1000, 'f', -1, 64))
 			}
-		case "netbsd", "openbsd":
+		case "dragonfly", "netbsd", "openbsd":
 			args = append(args, "-W", strconv.FormatFloat(timeout*1000, 'f', -1, 64))
 		case "linux":
 			args = append(args, "-W", strconv.FormatFloat(timeout, 'f', -1, 64))
@@ -146,7 +146,7 @@
 			} else {
 				args = append(args, "-t", strconv.Itoa(deadline))
 			}
-		case "darwin", "netbsd", "openbsd":
+		case "darwin", "dragonfly", "netbsd", "openbsd":
 			args = append(args, "-t", strconv.Itoa(deadline))
 		case "linux":
 			args = append(args, "-w", strconv.Itoa(deadline))
@@ -159,7 +159,7 @@
 		switch system {
 		case "darwin":
 			args = append(args, "-I", p.Interface)
-		case "freebsd", "netbsd", "openbsd":
+		case "dragonfly", "freebsd", "netbsd", "openbsd":
 			args = append(args, "-S", p.Interface)
 		case "linux":
 			args = append(args, "-I", p.Interface)
