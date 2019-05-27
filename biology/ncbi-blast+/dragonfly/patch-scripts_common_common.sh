--- scripts/common/common.sh.orig	2015-10-13 13:57:17 UTC
+++ scripts/common/common.sh
@@ -427,6 +427,7 @@ COMMON_DetectPlatform()
 	Darwin\ i386    ) echo IntelMAC   ;;
 	Darwin\ x86_64  ) echo IntelMAC   ;; # split into IntelMac64?
 	Darwin\ powerpc ) echo PowerMAC   ;;
+	DragonFly\ x86_64) echo DragonFly64 ;;
 	FreeBSD\ amd64  ) echo FreeBSD64  ;;
 	FreeBSD\ i386   ) echo FreeBSD32  ;;
 	IRIX64\ *       ) echo IRIX64     ;;
