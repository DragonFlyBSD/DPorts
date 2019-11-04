--- src/vendor/golang.org/x/net/route/address.go.orig	2019-10-17 22:02:09 UTC
+++ src/vendor/golang.org/x/net/route/address.go
@@ -222,7 +222,7 @@ func parseKernelInetAddr(af int, b []byt
 	//   the routing message boundary
 	l := int(b[0])
 	if runtime.GOOS == "darwin" {
-		// On Darwn, an address in the kernel form is also
+		// On Darwin, an address in the kernel form is also
 		// used as a message filler.
 		if l == 0 || len(b) > roundup(l) {
 			l = roundup(l)
