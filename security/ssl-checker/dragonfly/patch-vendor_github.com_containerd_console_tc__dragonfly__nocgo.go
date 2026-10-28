--- vendor/github.com/containerd/console/tc_dragonfly_nocgo.go.orig	2026-10-26 03:35:42 UTC
+++ vendor/github.com/containerd/console/tc_dragonfly_nocgo.go
@@ -0,0 +1,41 @@
+//go:build dragonfly && !cgo
+// +build dragonfly,!cgo
+
+/*
+   Copyright The containerd Authors.
+
+   Licensed under the Apache License, Version 2.0 (the "License");
+   you may not use this file except in compliance with the License.
+   You may obtain a copy of the License at
+
+       http://www.apache.org/licenses/LICENSE-2.0
+
+   Unless required by applicable law or agreed to in writing, software
+   distributed under the License is distributed on an "AS IS" BASIS,
+   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
+   See the License for the specific language governing permissions and
+   limitations under the License.
+*/
+
+package console
+
+import (
+	"os"
+
+	"golang.org/x/sys/unix"
+)
+
+const (
+	cmdTcGet = unix.TIOCGETA
+	cmdTcSet = unix.TIOCSETA
+)
+
+// unlockpt and ptsname need cgo on DragonFly; these stubs only let code
+// that depends on them compile.
+func unlockpt(f *os.File) error {
+	panic("unlockpt() support requires cgo.")
+}
+
+func ptsname(f *os.File) (string, error) {
+	panic("ptsname() support requires cgo.")
+}
