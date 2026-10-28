--- vendor/gitlab.com/gitlab-org/rust/gitlab-code-parser/bindings/go/chunker/chunker_dragonfly_amd64.go.orig
+++ vendor/gitlab.com/gitlab-org/rust/gitlab-code-parser/bindings/go/chunker/chunker_dragonfly_amd64.go
@@ -0,0 +1,10 @@
+//go:build dragonfly && amd64
+// +build dragonfly,amd64
+
+package chunker
+
+/*
+#cgo CFLAGS: -I/usr/local/include
+#cgo LDFLAGS: -L/usr/local/lib -lparser_c_bindings
+*/
+import "C"
