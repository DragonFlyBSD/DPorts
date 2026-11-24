--- internal/locker/runtime_unix.go.orig
+++ internal/locker/runtime_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || openbsd || freebsd
+//go:build dragonfly || linux || openbsd || freebsd
 
 /*
    Copyright 2020 Docker Compose CLI authors
