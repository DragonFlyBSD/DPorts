--- src/vendor/golang.org/x/net/dns/dnsmessage/message.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/dns/dnsmessage/message.go
@@ -1660,7 +1660,7 @@ func (h *ResourceHeader) fixLen(msg []by
 	return nil
 }
 
-// EDNS(0) wire costants.
+// EDNS(0) wire constants.
 const (
 	edns0Version = 0
 
