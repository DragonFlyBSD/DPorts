--- config.m4.orig	2021-01-21 10:52:20.549416000 +0100
+++ config.m4	2021-01-21 10:52:10.639373000 +0100
@@ -24,13 +24,10 @@
   ext_shared=yes
 
   if test "$PHP_HUGE_CODE_PAGES" = "yes"; then
-    AC_DEFINE(HAVE_HUGE_CODE_PAGES, 1, [Define to enable copying PHP CODE pages into HUGE PAGES (experimental)])
   fi
 
   if test "$PHP_OPCACHE_JIT" = "yes"; then
     case $host_cpu in
-      x86*|amd64|i386)
-        ;;
       *)
         AC_MSG_WARN([JIT not supported by host architecture])
         PHP_OPCACHE_JIT=no
