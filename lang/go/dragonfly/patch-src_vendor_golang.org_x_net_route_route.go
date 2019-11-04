--- src/vendor/golang.org/x/net/route/route.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/route.go
@@ -73,7 +73,7 @@ type RouteMessage struct {
 	Version int     // message version
 	Type    int     // message type
 	Flags   int     // route flags
-	Index   int     // interface index when atatched
+	Index   int     // interface index when attached
 	ID      uintptr // sender's identifier; usually process ID
 	Seq     int     // sequence number
 	Err     error   // error on requested operation
