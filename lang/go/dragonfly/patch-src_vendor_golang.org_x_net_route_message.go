--- src/vendor/golang.org/x/net/route/message.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/message.go
@@ -45,7 +45,7 @@ func ParseRIB(typ RIBType, b []byte) ([]
 		if len(b) < l {
 			return nil, errMessageTooShort
 		}
-		if b[2] != sysRTM_VERSION {
+		if b[2] != rtmVersion {
 			b = b[l:]
 			continue
 		}
