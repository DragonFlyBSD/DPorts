--- google_guest_agent/non_windows_accounts.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/non_windows_accounts.go
@@ -412,7 +412,7 @@
 		// 9 means group already exists in Linux.
 		return nil
 	}
-	if runtime.GOOS == "freebsd" && ret.ExitCode == 65 {
+	if (runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly") && ret.ExitCode == 65 {
 		// 65 means group already exists in FreeBSD.
 		return nil
 	}
