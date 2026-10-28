--- vendor/github.com/tree-sitter/go-tree-sitter/dup_unix.go.orig	2026-10-26 05:08:23 UTC
+++ vendor/github.com/tree-sitter/go-tree-sitter/dup_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || darwin || freebsd
+//go:build linux || darwin || freebsd || dragonfly
 
 package tree_sitter
 
