--- Makefile.PL.orig	2020-05-30 17:52:11 UTC
+++ Makefile.PL
@@ -25,7 +25,7 @@ else {
     $options{CCFLAGS} = "$Config{ccflags} -Wall -Wwrite-strings"
         if $Config{ccname} eq "gcc" and $] >= 5.006;
     $options{LIBS}    = '-lpcap';
-    $options{DEFINE}  = '-DHAVE_PCAP_LIST_DATALINKS';
+    $options{DEFINE}  = '-DHAVE_PCAP_LIST_DATALINKS -DHAVE_PCAP_SETSAMPLING -DHAVE_PCAP_OPEN';
 }
 
 for my $arg (@ARGV) {
