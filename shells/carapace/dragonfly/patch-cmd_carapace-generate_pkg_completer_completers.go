--- cmd/carapace-generate/pkg/completer/completers.go.orig
+++ cmd/carapace-generate/pkg/completer/completers.go
@@ -22,6 +22,7 @@
 	groups := map[string][]string{
 		"android": {"common", "unix", "linux", "android", "bash", "zsh"},
 		"darwin":  {"common", "unix", "bsd", "darwin", "bash", "zsh"},
+		"dragonfly": {"common", "unix", "bsd", "bash", "zsh"},
 		"freebsd": {"common", "unix", "bsd", "freebsd", "bash", "zsh"},
 		"linux":   {"common", "unix", "linux", "bash", "zsh"},
 		"netbsd":  {"common", "unix", "bsd", "netbsd", "bash", "zsh"},
