--- vendor/github.com/tsg/gopacket/pcap/pcap.go.orig	2016-12-06 07:41:08 UTC
+++ vendor/github.com/tsg/gopacket/pcap/pcap.go
@@ -9,6 +9,7 @@ package pcap
 
 /*
 #cgo linux LDFLAGS: -lpcap
+#cgo dragonfly LDFLAGS: -lpcap
 #cgo freebsd LDFLAGS: -lpcap
 #cgo openbsd LDFLAGS: -lpcap
 #cgo darwin LDFLAGS: -lpcap
