--- vendor/github.com/mitchellh/go-ps/process_dragonfly.go.orig	2026-10-26 05:42:18 UTC
+++ vendor/github.com/mitchellh/go-ps/process_dragonfly.go
@@ -0,0 +1,160 @@
+//go:build dragonfly
+// +build dragonfly
+
+package ps
+
+import (
+	"encoding/binary"
+	"syscall"
+	"unsafe"
+)
+
+// copied from sys/sysctl.h
+const (
+	CTL_KERN           = 1  // "high kernel": proc, limits
+	KERN_PROC          = 14 // struct: process entries
+	KERN_PROC_ALL      = 0  // everything
+	KERN_PROC_PID      = 1  // by process id
+	KERN_PROC_PATHNAME = 9  // path to executable
+)
+
+// struct kinfo_proc (sys/kinfo.h) on DragonFly/amd64: its size and the
+// offsets of the fields used here.
+const (
+	kinfoProcSize = 1048
+	kinfoProcComm = 112 // char kp_comm[MAXCOMLEN+1]
+	kinfoCommLen  = 17
+	kinfoProcPid  = 220
+	kinfoProcPpid = 224
+	kinfoProcPgid = 228
+	kinfoProcSid  = 236
+)
+
+// UnixProcess is an implementation of Process that contains Unix-specific
+// fields and information.
+type UnixProcess struct {
+	pid   int
+	ppid  int
+	state rune
+	pgrp  int
+	sid   int
+
+	binary string
+}
+
+func (p *UnixProcess) Pid() int {
+	return p.pid
+}
+
+func (p *UnixProcess) PPid() int {
+	return p.ppid
+}
+
+func (p *UnixProcess) Executable() string {
+	return p.binary
+}
+
+// Refresh reloads all the data associated with this process.
+func (p *UnixProcess) Refresh() error {
+	mib := []int32{CTL_KERN, KERN_PROC, KERN_PROC_PID, int32(p.pid)}
+
+	buf, length, err := call_syscall(mib)
+	if err != nil {
+		return err
+	}
+	if length != kinfoProcSize {
+		return err
+	}
+
+	p.ppid, p.pgrp, p.sid, p.binary = copy_params(buf)
+	return nil
+}
+
+func kinfoInt32(b []byte, off int) int {
+	return int(int32(binary.LittleEndian.Uint32(b[off : off+4])))
+}
+
+func copy_params(k []byte) (int, int, int, string) {
+	comm := k[kinfoProcComm : kinfoProcComm+kinfoCommLen]
+	n := 0
+	for n < len(comm) && comm[n] != 0 {
+		n++
+	}
+	return kinfoInt32(k, kinfoProcPpid), kinfoInt32(k, kinfoProcPgid),
+		kinfoInt32(k, kinfoProcSid), string(comm[:n])
+}
+
+func findProcess(pid int) (Process, error) {
+	mib := []int32{CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, int32(pid)}
+
+	_, _, err := call_syscall(mib)
+	if err != nil {
+		return nil, err
+	}
+
+	return newUnixProcess(pid)
+}
+
+func processes() ([]Process, error) {
+	results := make([]Process, 0, 50)
+
+	mib := []int32{CTL_KERN, KERN_PROC, KERN_PROC_ALL, 0}
+	buf, length, err := call_syscall(mib)
+	if err != nil {
+		return results, err
+	}
+
+	count := int(length / kinfoProcSize)
+	for i := 0; i < count; i++ {
+		b := buf[i*kinfoProcSize : (i+1)*kinfoProcSize]
+		p := &UnixProcess{pid: kinfoInt32(b, kinfoProcPid)}
+		p.ppid, p.pgrp, p.sid, p.binary = copy_params(b)
+
+		results = append(results, p)
+	}
+
+	return results, nil
+}
+
+func call_syscall(mib []int32) ([]byte, uint64, error) {
+	miblen := uint64(len(mib))
+
+	// get required buffer size
+	length := uint64(0)
+	_, _, err := syscall.RawSyscall6(
+		syscall.SYS___SYSCTL,
+		uintptr(unsafe.Pointer(&mib[0])),
+		uintptr(miblen),
+		0,
+		uintptr(unsafe.Pointer(&length)),
+		0,
+		0)
+	if err != 0 {
+		b := make([]byte, 0)
+		return b, length, err
+	}
+	if length == 0 {
+		b := make([]byte, 0)
+		return b, length, err
+	}
+	// get proc info itself
+	buf := make([]byte, length)
+	_, _, err = syscall.RawSyscall6(
+		syscall.SYS___SYSCTL,
+		uintptr(unsafe.Pointer(&mib[0])),
+		uintptr(miblen),
+		uintptr(unsafe.Pointer(&buf[0])),
+		uintptr(unsafe.Pointer(&length)),
+		0,
+		0)
+	if err != 0 {
+		return buf, length, err
+	}
+
+	return buf, length, nil
+}
+
+func newUnixProcess(pid int) (*UnixProcess, error) {
+	p := &UnixProcess{pid: pid}
+	return p, p.Refresh()
+}
