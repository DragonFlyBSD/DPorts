--- src/internal/routebsd/route_test.go.orig	2026-10-19 22:20:36 UTC
+++ src/internal/routebsd/route_test.go
@@ -14,7 +14,7 @@
 
 func (m *InterfaceMessage) String() string {
 	var attrs addrAttrs
-	if runtime.GOOS == "openbsd" {
+	if runtime.GOOS == "openbsd" || runtime.GOOS == "dragonfly" {
 		attrs = addrAttrs(nativeEndian.Uint32(m.raw[12:16]))
 	} else {
 		attrs = addrAttrs(nativeEndian.Uint32(m.raw[4:8]))
@@ -24,7 +24,7 @@
 
 func (m *InterfaceAddrMessage) String() string {
 	var attrs addrAttrs
-	if runtime.GOOS == "openbsd" {
+	if runtime.GOOS == "openbsd" || runtime.GOOS == "dragonfly" {
 		attrs = addrAttrs(nativeEndian.Uint32(m.raw[12:16]))
 	} else {
 		attrs = addrAttrs(nativeEndian.Uint32(m.raw[4:8]))
@@ -80,7 +80,7 @@
 		switch m := m.(type) {
 		case *InterfaceMessage:
 			var attrs addrAttrs
-			if runtime.GOOS == "openbsd" {
+			if runtime.GOOS == "openbsd" || runtime.GOOS == "dragonfly" {
 				attrs = addrAttrs(nativeEndian.Uint32(m.raw[12:16]))
 			} else {
 				attrs = addrAttrs(nativeEndian.Uint32(m.raw[4:8]))
@@ -91,7 +91,7 @@
 			ss = append(ss, m.String()+" "+addrs(m.Addrs).String())
 		case *InterfaceAddrMessage:
 			var attrs addrAttrs
-			if runtime.GOOS == "openbsd" {
+			if runtime.GOOS == "openbsd" || runtime.GOOS == "dragonfly" {
 				attrs = addrAttrs(nativeEndian.Uint32(m.raw[12:16]))
 			} else {
 				attrs = addrAttrs(nativeEndian.Uint32(m.raw[4:8]))
