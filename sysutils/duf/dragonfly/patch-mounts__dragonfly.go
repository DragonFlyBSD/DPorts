--- mounts_dragonfly.go.orig	2026-10-26 04:37:53 UTC
+++ mounts_dragonfly.go
@@ -0,0 +1,92 @@
+//go:build dragonfly
+// +build dragonfly
+
+package main
+
+import (
+	"golang.org/x/sys/unix"
+)
+
+func (m *Mount) Stat() unix.Statfs_t {
+	return m.Metadata.(unix.Statfs_t)
+}
+
+func mounts() ([]Mount, []string, error) {
+	var ret []Mount
+	var warnings []string
+
+	count, err := unix.Getfsstat(nil, unix.MNT_WAIT)
+	if err != nil {
+		return nil, nil, err
+	}
+	fs := make([]unix.Statfs_t, count)
+	if _, err = unix.Getfsstat(fs, unix.MNT_WAIT); err != nil {
+		return nil, nil, err
+	}
+
+	for _, stat := range fs {
+		// DragonFly's Statfs_t.Flags is an int32
+		flags := uint32(stat.Flags)
+		opts := "rw"
+		if flags&unix.MNT_RDONLY != 0 {
+			opts = "ro"
+		}
+		if flags&unix.MNT_SYNCHRONOUS != 0 {
+			opts += ",sync"
+		}
+		if flags&unix.MNT_NOEXEC != 0 {
+			opts += ",noexec"
+		}
+		if flags&unix.MNT_NOSUID != 0 {
+			opts += ",nosuid"
+		}
+		if flags&unix.MNT_ASYNC != 0 {
+			opts += ",async"
+		}
+		if flags&unix.MNT_SOFTDEP != 0 {
+			opts += ",softdep"
+		}
+		if flags&unix.MNT_NOSYMFOLLOW != 0 {
+			opts += ",nosymfollow"
+		}
+		if flags&unix.MNT_NOATIME != 0 {
+			opts += ",noatime"
+		}
+		if flags&unix.MNT_NOCLUSTERR != 0 {
+			opts += ",noclusterr"
+		}
+		if flags&unix.MNT_NOCLUSTERW != 0 {
+			opts += ",noclusterw"
+		}
+
+		device := byteToString(stat.Mntfromname[:])
+		mountPoint := byteToString(stat.Mntonname[:])
+		fsType := byteToString(stat.Fstypename[:])
+
+		if len(device) == 0 {
+			continue
+		}
+
+		d := Mount{
+			Device:     device,
+			Mountpoint: mountPoint,
+			Fstype:     fsType,
+			Type:       fsType,
+			Opts:       opts,
+			Metadata:   stat,
+			Total:      (uint64(stat.Blocks) * uint64(stat.Bsize)),
+			Free:       (uint64(stat.Bavail) * uint64(stat.Bsize)),
+			Used:       (uint64(stat.Blocks) - uint64(stat.Bfree)) * uint64(stat.Bsize),
+			Inodes:     uint64(stat.Files),
+			InodesFree: uint64(stat.Ffree),
+			InodesUsed: uint64(stat.Files) - uint64(stat.Ffree),
+			Blocks:     uint64(stat.Blocks),
+			BlockSize:  uint64(stat.Bsize),
+		}
+		d.DeviceType = deviceType(d)
+
+		ret = append(ret, d)
+	}
+
+	return ret, warnings, nil
+}
