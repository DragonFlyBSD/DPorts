--- test.sh.orig	2014-08-17 16:28:11 UTC
+++ test.sh
@@ -63,7 +63,7 @@ test_yasm() {
 SYS=`uname -s`
 MACH=`uname -m`
 
-if test "$SYS" = "Linux" || test "$SYS" = "FreeBSD" || \
+if test "$SYS" = "Linux" || test "$SYS" = "DragonFly" || test "$SYS" = "FreeBSD" || \
 	test "$SYS" = "OpenBSD"; then
 	if test "$MACH" = "x86_64" || test "$MACH" = "amd64"; then
 		if test "$NWCC_ASM" != ""; then
