--- vendor/github.com/docker/docker-credential-helpers/secretservice/secretservice.go.orig	2026-11-19 15:16:26 UTC
+++ vendor/github.com/docker/docker-credential-helpers/secretservice/secretservice.go
@@ -1,4 +1,4 @@
-//go:build linux || freebsd && cgo
+//go:build linux || (dragonfly && cgo) || (freebsd && cgo)
 
 package secretservice
 
