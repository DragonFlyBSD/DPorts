--- src/vendor/golang.org/x/net/route/sys.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/sys.go
@@ -11,6 +11,7 @@ import "unsafe"
 var (
 	nativeEndian binaryByteOrder
 	kernelAlign  int
+	rtmVersion   byte
 	wireFormats  map[int]*wireFormat
 )
 
@@ -22,6 +23,8 @@ func init() {
 	} else {
 		nativeEndian = bigEndian
 	}
+	// might get overridden in probeRoutingStack
+	rtmVersion = sysRTM_VERSION
 	kernelAlign, wireFormats = probeRoutingStack()
 }
 
