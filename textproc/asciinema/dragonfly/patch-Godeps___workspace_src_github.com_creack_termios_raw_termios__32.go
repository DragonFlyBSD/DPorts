--- Godeps/_workspace/src/github.com/creack/termios/raw/termios_32.go.orig	2016-05-20 14:13:31 UTC
+++ Godeps/_workspace/src/github.com/creack/termios/raw/termios_32.go
@@ -1,11 +1,11 @@
-// +build linux freebsd
+// +build linux freebsd dragonfly
 
 package raw
 
 // Termios holds the TTY attributes. See man termios(4).
 // Tested on linux386, linux/arm, linux/amd64,
 //           freebsd/386, freebsd/arm, freebsd/amd64.
-// See tremios_64.go for darwin.
+// See termios_64.go for darwin.
 type Termios struct {
 	Iflag  uint32
 	Oflag  uint32
