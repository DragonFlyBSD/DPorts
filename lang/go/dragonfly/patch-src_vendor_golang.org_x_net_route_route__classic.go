--- src/vendor/golang.org/x/net/route/route_classic.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/route_classic.go
@@ -25,7 +25,7 @@ func (m *RouteMessage) marshal() ([]byte
 	b := make([]byte, l)
 	nativeEndian.PutUint16(b[:2], uint16(l))
 	if m.Version == 0 {
-		b[2] = sysRTM_VERSION
+		b[2] = rtmVersion
 	} else {
 		b[2] = byte(m.Version)
 	}
