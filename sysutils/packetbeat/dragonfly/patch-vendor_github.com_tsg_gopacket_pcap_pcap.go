--- vendor/github.com/tsg/gopacket/pcap/pcap.go.orig	2016-05-18 15:54:42.000000000 +0300
+++ vendor/github.com/tsg/gopacket/pcap/pcap.go
@@ -10,6 +10,7 @@ package pcap
 /*
 #cgo linux LDFLAGS: -lpcap
 #cgo freebsd LDFLAGS: -lpcap
+#cgo dragonfly LDFLAGS: -lpcap
 #cgo darwin LDFLAGS: -lpcap
 #cgo solaris LDFLAGS: -lpcap
 #cgo windows CFLAGS: -I C:/WpdPack/Include
