--- aclocal.m4.intermediate	2013-04-03 01:15:00.774777000 +0000
+++ aclocal.m4
@@ -211,6 +211,9 @@ AC_DEFUN([FPTOOLS_SET_HASKELL_PLATFORM_V
         mingw32)
             test -z "[$]2" || eval "[$]2=OSMinGW32"
             ;;
+        dragonfly)
+            test -z "[$]2" || eval "[$]2=OSDragonFly"
+            ;;
         freebsd)
             test -z "[$]2" || eval "[$]2=OSFreeBSD"
             ;;
@@ -1877,6 +1880,9 @@ case "$1" in
   freebsd|netbsd|openbsd|dragonfly|osf1|osf3|hpux|linuxaout|kfreebsdgnu|freebsd2|solaris2|cygwin32|mingw32|darwin|gnu|nextstep2|nextstep3|sunos4|ultrix|irix|aix|haiku)
     $2="$1"
     ;;
+  dragonfly*)
+    $2="dragonfly"
+    ;;
   freebsd*) # like i686-gentoo-freebsd8
     $2="freebsd"
     ;;
