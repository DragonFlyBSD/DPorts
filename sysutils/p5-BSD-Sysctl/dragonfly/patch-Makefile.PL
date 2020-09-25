--- Makefile.PL.orig	2020-09-25 16:27:20 UTC
+++ Makefile.PL
@@ -6,7 +6,7 @@ use Config;
 
 my $module_name = 'BSD::Sysctl';
 
-if ($Config{osname} ne 'freebsd') {
+if ($Config{osname} ne 'freebsd' and $Config{osname} ne 'dragonfly') {
     die "OS unsupported ($Config{osname}). Here's a nickel, go buy yourself a real OS.\n";
 }
 
@@ -119,5 +119,22 @@ S,xvfsconf	24	auto
 T,struct_cdev	25	auto
 Q	26	FMT_64
 QU	27	FMT_U64
-C	28	FMT_INT8
-CU	29	FMT_UINT8
+S,timespec	28	auto
+S,sensor	29	auto
+S,vmmeter	30	auto
+S,vmstats	31	auto
+S,xtcpcb	32	auto
+S,xunpcb	33	auto
+S,ip_stats	34	auto
+S,tcp_stats	35	auto
+S,carpstats	36	auto
+S,rtstatistics	37	auto
+S,nchstats	38	auto
+S,cryptostats	39	auto
+S,kinfo_cputime	40	auto
+S,tty	41	auto
+S,file	42	auto
+S,proc	43	auto
+T,udev_t	44	auto
+C	45	FMT_INT8
+CU	46	FMT_UINT8
