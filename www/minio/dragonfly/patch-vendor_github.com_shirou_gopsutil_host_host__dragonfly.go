--- vendor/github.com/shirou/gopsutil/host/host_dragonfly.go.orig	2020-09-30 17:24:28 UTC
+++ vendor/github.com/shirou/gopsutil/host/host_dragonfly.go
@@ -0,0 +1,159 @@
+// +build dragonfly
+
+package host
+
+import (
+	"context"
+	"os"
+	"runtime"
+	"strings"
+	"sync/atomic"
+	"syscall"
+	"time"
+	"unsafe"
+
+	"github.com/shirou/gopsutil/internal/common"
+	"github.com/shirou/gopsutil/process"
+	"golang.org/x/sys/unix"
+)
+
+const (
+	UTNameSize = 16 /* see MAXLOGNAME in <sys/param.h> */
+	UTLineSize = 8
+	UTHostSize = 16
+)
+
+func Info() (*InfoStat, error) {
+	return InfoWithContext(context.Background())
+}
+
+func InfoWithContext(ctx context.Context) (*InfoStat, error) {
+	ret := &InfoStat{
+		OS:             runtime.GOOS,
+		PlatformFamily: "freebsd",
+	}
+
+	hostname, err := os.Hostname()
+	if err == nil {
+		ret.Hostname = hostname
+	}
+
+	platform, family, version, err := PlatformInformation()
+	if err == nil {
+		ret.Platform = platform
+		ret.PlatformFamily = family
+		ret.PlatformVersion = version
+		ret.KernelVersion = version
+	}
+
+	kernelArch, err := kernelArch()
+	if err == nil {
+		ret.KernelArch = kernelArch
+	}
+
+	system, role, err := Virtualization()
+	if err == nil {
+		ret.VirtualizationSystem = system
+		ret.VirtualizationRole = role
+	}
+
+	boot, err := BootTime()
+	if err == nil {
+		ret.BootTime = boot
+		ret.Uptime = uptime(boot)
+	}
+
+	procs, err := process.Pids()
+	if err == nil {
+		ret.Procs = uint64(len(procs))
+	}
+
+	hostid, err := unix.Sysctl("kern.hostuuid")
+	if err == nil && hostid != "" {
+		ret.HostID = strings.ToLower(hostid)
+	}
+
+	return ret, nil
+}
+
+// cachedBootTime must be accessed via atomic.Load/StoreUint64
+var cachedBootTime uint64
+
+func BootTime() (uint64, error) {
+	return BootTimeWithContext(context.Background())
+}
+
+func BootTimeWithContext(ctx context.Context) (uint64, error) {
+	t := atomic.LoadUint64(&cachedBootTime)
+	if t != 0 {
+		return t, nil
+	}
+	buf, err := unix.SysctlRaw("kern.boottime")
+	if err != nil {
+		return 0, err
+	}
+
+	tv := *(*syscall.Timeval)(unsafe.Pointer((&buf[0])))
+	atomic.StoreUint64(&cachedBootTime, uint64(tv.Sec))
+
+	return t, nil
+}
+
+func uptime(boot uint64) uint64 {
+	return uint64(time.Now().Unix()) - boot
+}
+
+func Uptime() (uint64, error) {
+	return UptimeWithContext(context.Background())
+}
+
+func UptimeWithContext(ctx context.Context) (uint64, error) {
+	boot, err := BootTime()
+	if err != nil {
+		return 0, err
+	}
+	return uptime(boot), nil
+}
+
+func PlatformInformation() (string, string, string, error) {
+	return PlatformInformationWithContext(context.Background())
+}
+
+func PlatformInformationWithContext(ctx context.Context) (string, string, string, error) {
+	platform, err := unix.Sysctl("kern.ostype")
+	if err != nil {
+		return "", "", "", err
+	}
+
+	version, err := unix.Sysctl("kern.osrelease")
+	if err != nil {
+		return "", "", "", err
+	}
+
+	return strings.ToLower(platform), "", strings.ToLower(version), nil
+}
+
+func Virtualization() (string, string, error) {
+	return VirtualizationWithContext(context.Background())
+}
+
+func VirtualizationWithContext(ctx context.Context) (string, string, error) {
+	return "", "", common.ErrNotImplementedError
+}
+
+func SensorsTemperatures() ([]TemperatureStat, error) {
+	return SensorsTemperaturesWithContext(context.Background())
+}
+
+func SensorsTemperaturesWithContext(ctx context.Context) ([]TemperatureStat, error) {
+	return []TemperatureStat{}, common.ErrNotImplementedError
+}
+
+func KernelVersion() (string, error) {
+	return KernelVersionWithContext(context.Background())
+}
+
+func KernelVersionWithContext(ctx context.Context) (string, error) {
+	_, _, version, err := PlatformInformation()
+	return version, err
+}
