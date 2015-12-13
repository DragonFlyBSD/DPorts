--- Makefile.PL.orig	2006-11-10 00:19:12.000000000 +0200
+++ Makefile.PL
@@ -36,6 +36,9 @@ for ($^O) {
     } else {
       print "Sys::MemInfo for FreeBSD 4 and lower\n";
     }
+  } elsif (/dragonfly/) {
+    copy ('arch/dragonfly.xs', 'MemInfo.xs');
+    print "Sys::MemInfo for DragonFly\n";
   } elsif (/bsd/) {
     copy ('arch/bsd.xs', 'MemInfo.xs');
     if (/netbsd/) {
