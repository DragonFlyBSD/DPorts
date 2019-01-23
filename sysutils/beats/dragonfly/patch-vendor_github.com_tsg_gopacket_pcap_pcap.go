--- vendor/github.com/tsg/gopacket/pcap/pcap.go.orig	2018-12-23 00:02:24 UTC
+++ vendor/github.com/tsg/gopacket/pcap/pcap.go
@@ -10,6 +10,7 @@ package pcap
 /*
 #cgo linux LDFLAGS: -lpcap
 #cgo freebsd LDFLAGS: -lpcap
+#cgo dragonfly LDFLAGS: -lpcap
 #cgo openbsd LDFLAGS: -lpcap
 #cgo darwin LDFLAGS: -lpcap
 #cgo solaris LDFLAGS: -lpcap
