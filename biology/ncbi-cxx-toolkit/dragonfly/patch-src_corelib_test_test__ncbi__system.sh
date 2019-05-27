--- src/corelib/test/test_ncbi_system.sh.orig	2015-07-27 16:49:00 UTC
+++ src/corelib/test/test_ncbi_system.sh
@@ -25,7 +25,7 @@ case "`uname -s`" in
    test $test_mem -eq 0    -o  $test_mem -eq 255  ||  exit 1
    test $test_cpu -eq 255  -o  $test_cpu -eq 137  ||  exit 1
    ;;
- Darwin | FreeBSD )
+ Darwin | DragonFly | FreeBSD )
    test $test_mem -eq 0    -o  $test_mem -eq 134  -o  $test_mem -eq 255  ||  exit 1
    test $test_cpu -eq 255  -o  $test_cpu -eq 137  ||  exit 1
    ;;
