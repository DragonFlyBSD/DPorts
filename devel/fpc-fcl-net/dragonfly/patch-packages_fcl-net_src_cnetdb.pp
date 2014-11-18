--- packages/fcl-net/src/cnetdb.pp.orig	2013-10-13 14:20:53 UTC
+++ packages/fcl-net/src/cnetdb.pp
@@ -194,7 +194,7 @@ type
 {$if defined(LINUX) or defined(OPENBSD)}
 {$define FIRST_ADDR_THEN_CANONNAME}
 {$endif}
-{$if defined(FREEBSD) or defined(NETBSD)}
+{$if defined(FREEBSD) or defined(NETBSD) or defined(DRAGONFLY)}
 {$define FIRST_CANONNAME_THEN_ADDR}
 {$endif}
 {$if not defined(FIRST_CANONNAME_THEN_ADDR) and not defined(FIRST_ADDR_THEN_CANONNAME)}
