--- components/cli/vendor/github.com/tonistiigi/fsutil/diskwriter_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ components/cli/vendor/github.com/tonistiigi/fsutil/diskwriter_dragonfly.go	2020-07-16 15:26:44.270183000 +0200
@@ -0,0 +1,18 @@
+package fsutil
+
+import (
+	"github.com/pkg/errors"
+	"golang.org/x/sys/unix"
+)
+
+func chtimes(path string, un int64) error {
+	var utimes [2]unix.Timespec
+	utimes[0] = unix.NsecToTimespec(un)
+	utimes[1] = utimes[0]
+
+	if err := unix.UtimesNanoAt(unix.AT_FDCWD, path, utimes[0:], unix.AT_SYMLINK_NOFOLLOW); err != nil {
+		return errors.Wrap(err, "failed call to UtimesNanoAt")
+	}
+
+	return nil
+}
