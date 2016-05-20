--- /dev/null	2016-05-20 14:19:48 UTC
+++ Godeps/_workspace/src/github.com/kr/pty/types_dragonfly.go
@@ -0,0 +1,17 @@
+// +build ignore
+
+package pty
+
+/*
+#define _KERNEL
+#include <sys/conf.h>
+#include <sys/param.h>
+#include <sys/filio.h>
+*/
+import "C"
+
+const (
+	_C_SPECNAMELEN = C.SPECNAMELEN /* max length of devicename */
+)
+
+type fiodgnameArg C.struct_fiodname_args
