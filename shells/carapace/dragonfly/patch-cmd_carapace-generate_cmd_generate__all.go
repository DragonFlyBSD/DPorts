--- cmd/carapace-generate/cmd/generate_all.go.orig
+++ cmd/carapace-generate/cmd/generate_all.go
@@ -43,12 +43,14 @@
 			{"!release && !force_all &&  android", "android", false, "cmd/completers/completers_termux.go"},
 			{"!release && !force_all && !android", "linux", false, "cmd/completers/completers_linux.go"},
 			{"!release && !force_all", "darwin", false, "cmd/completers/completers_darwin.go"},
+			{"!release && !force_all", "dragonfly", false, "cmd/completers/completers_dragonfly.go"},
 			{"!release && !force_all", "freebsd", false, "cmd/completers/completers_freebsd.go"},
 			{"!release && !force_all", "netbsd", false, "cmd/completers/completers_netbsd.go"},
 			{"!release && !force_all", "openbsd", false, "cmd/completers/completers_openbsd.go"},
 			{"!release && !force_all", "windows", false, "cmd/completers/completers_windows.go"},
 			{"!release &&  force_all", "force_all", false, "cmd/completers/completers_all.go"},
 			{"release && !force_all &&  android", "android", true, "cmd/completers/completers_release_termux.go"},
+			{"release && !force_all && !android", "dragonfly", true, "cmd/completers/completers_release_dragonfly.go"},
 			{"release && !force_all && !android", "freebsd", true, "cmd/completers/completers_release_freebsd.go"},
 			{"release && !force_all && !android", "linux", true, "cmd/completers/completers_release_linux.go"},
 			{"release && !force_all && !android", "netbsd", true, "cmd/completers/completers_release_netbsd.go"},
@@ -84,6 +86,7 @@
 	groups := map[string][]string{
 		"android":   {"common", "unix", "linux", "android", "bash", "zsh"},
 		"darwin":    {"common", "unix", "bsd", "darwin", "bash", "zsh"},
+		"dragonfly": {"common", "unix", "bsd", "bash", "zsh"},
 		"freebsd":   {"common", "unix", "bsd", "freebsd", "bash", "zsh"},
 		"linux":     {"common", "unix", "linux", "bash", "zsh"},
 		"netbsd":    {"common", "unix", "bsd", "netbsd", "bash", "zsh"},
