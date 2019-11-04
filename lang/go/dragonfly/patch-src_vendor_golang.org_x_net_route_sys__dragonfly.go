--- src/vendor/golang.org/x/net/route/sys_dragonfly.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/sys_dragonfly.go
@@ -4,7 +4,10 @@
 
 package route
 
-import "unsafe"
+import (
+	"syscall"
+	"unsafe"
+)
 
 func (typ RIBType) parseable() bool { return true }
 
@@ -56,6 +59,15 @@ func probeRoutingStack() (int, map[int]*
 	ifmam.parse = ifmam.parseInterfaceMulticastAddrMessage
 	ifanm := &wireFormat{extOff: sizeofIfAnnouncemsghdrDragonFlyBSD4, bodyOff: sizeofIfAnnouncemsghdrDragonFlyBSD4}
 	ifanm.parse = ifanm.parseInterfaceAnnounceMessage
+
+	rel, _ := syscall.SysctlUint32("kern.osreldate")
+	if rel >= 500705 {
+		// https://github.com/DragonFlyBSD/DragonFlyBSD/commit/43a373152df2d405c9940983e584e6a25e76632d
+		// but only the size of struct ifa_msghdr actually changed
+		rtmVersion = 7
+		ifam.bodyOff = sizeofIfaMsghdrDragonFlyBSD58
+	}
+
 	return int(unsafe.Sizeof(p)), map[int]*wireFormat{
 		sysRTM_ADD:        rtm,
 		sysRTM_DELETE:     rtm,
