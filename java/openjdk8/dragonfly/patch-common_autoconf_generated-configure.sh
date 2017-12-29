--- common/autoconf/generated-configure.sh.orig	2017-12-29 01:59:02.000000000 +0000
+++ common/autoconf/generated-configure.sh	2017-12-29 02:02:31.000000000 +0000
@@ -6825,7 +6825,7 @@
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -6858,7 +6858,7 @@
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
@@ -6978,7 +6978,7 @@
       VAR_OS_API=posix
       VAR_OS_ENV=macosx
       ;;
-    *bsd*)
+    *bsd*|*dragonfly*)
       VAR_OS=bsd
       VAR_OS_API=posix
       VAR_OS_ENV=bsd
@@ -7011,7 +7011,7 @@
     *netbsd*)
       VAR_OS_VENDOR=netbsd
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       VAR_OS_VENDOR=freebsd
       ;;
     *)
