--- aclocal.m4.intermediate	2013-09-26 17:19:37.000000000 +0000
+++ aclocal.m4
@@ -1931,6 +1931,9 @@ case "$1" in
   freebsd|netbsd|openbsd|dragonfly|osf1|osf3|hpux|linuxaout|kfreebsdgnu|freebsd2|solaris2|cygwin32|mingw32|darwin|gnu|nextstep2|nextstep3|sunos4|ultrix|irix|aix|haiku)
     $2="$1"
     ;;
+  dragonfly*)
+    $2="dragonfly"
+    ;;
   freebsd*) # like i686-gentoo-freebsd7
             #      i686-gentoo-freebsd8
             #      i686-gentoo-freebsd8.2
