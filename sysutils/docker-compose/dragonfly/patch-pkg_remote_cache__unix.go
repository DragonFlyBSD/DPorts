--- pkg/remote/cache_unix.go.orig
+++ pkg/remote/cache_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || openbsd || freebsd
+//go:build dragonfly || linux || openbsd || freebsd
 
 /*
    Copyright 2020 Docker Compose CLI authors
