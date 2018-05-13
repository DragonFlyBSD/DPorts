--- scripts/findmaxmem.sh.orig	2018-01-22 13:20:04.000000000 +0000
+++ scripts/findmaxmem.sh
@@ -17,6 +17,9 @@ elif [ "${PLATFORM}" = "SunOS" ]; then
 elif [ "${PLATFORM}" = "FreeBSD" ]; then
   totalmem=`dmesg | grep 'real memory' | sed -r 's/.* ([0-9]+) .*/\1/'`
   totalmem=`expr $totalmem / 1024`
+elif [ "${PLATFORM}" = "DragonFly" ]; then
+  totalmem=`sysctl -n hw.physmem`
+  totalmem=`expr $totalmem / 1024`
 fi
 echo $totalmem
 
