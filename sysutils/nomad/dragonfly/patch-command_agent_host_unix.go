--- command/agent/host/unix.go.intermediate	2021-06-22 14:04:22 UTC
+++ command/agent/host/unix.go
@@ -59,8 +59,8 @@ func makeDf(path string) (*df, error) {
 	return &df{s: &s}, err
 }
 
-func (d *df) total() uint64 {
-	return d.s.Blocks * uint64(d.s.Bsize)
+func (d *df) total() int64 {
+	return d.s.Blocks * int64(d.s.Bsize)
 }
 
 func (d *df) available() uint64 {
