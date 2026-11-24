--- google_guest_agent/clock.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/clock.go
@@ -39,7 +39,7 @@
 }
 
 func (a *clockskewMgr) Set(ctx context.Context) error {
-	if runtime.GOOS == "freebsd" {
+	if runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly" {
 		err := run.Quiet(ctx, "service", "ntpd", "status")
 		if err == nil {
 			if err := run.Quiet(ctx, "service", "ntpd", "stop"); err != nil {
