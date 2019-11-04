--- src/vendor/golang.org/x/net/route/zsys_dragonfly.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/zsys_dragonfly.go
@@ -46,8 +46,6 @@ const (
 	sysRTM_REDIRECT   = 0x6
 	sysRTM_MISS       = 0x7
 	sysRTM_LOCK       = 0x8
-	sysRTM_OLDADD     = 0x9
-	sysRTM_OLDDEL     = 0xa
 	sysRTM_RESOLVE    = 0xb
 	sysRTM_NEWADDR    = 0xc
 	sysRTM_DELADDR    = 0xd
@@ -89,6 +87,8 @@ const (
 	sizeofIfmaMsghdrDragonFlyBSD4       = 0x10
 	sizeofIfAnnouncemsghdrDragonFlyBSD4 = 0x18
 
+	sizeofIfaMsghdrDragonFlyBSD58 = 0x18
+
 	sizeofRtMsghdrDragonFlyBSD4  = 0x98
 	sizeofRtMetricsDragonFlyBSD4 = 0x70
 
