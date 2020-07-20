--- vendor/gopkg.in/olebedev/go-duktape.v3/duktape.go.orig	2020-07-19 14:56:47.509124000 +0200
+++ vendor/gopkg.in/olebedev/go-duktape.v3/duktape.go	2020-07-19 14:57:03.389103000 +0200
@@ -6,6 +6,7 @@
 #cgo linux LDFLAGS: -lm
 #cgo freebsd LDFLAGS: -lm
 #cgo openbsd LDFLAGS: -lm
+#cgo dragonfly LDFLAGS: -lm
 
 #include "duktape.h"
 #include "duk_logging.h"
