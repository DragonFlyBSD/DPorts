--- config.m4.orig	2020-10-13 21:58:13 UTC
+++ config.m4
@@ -24,13 +24,10 @@ if test "$PHP_OPCACHE" != "no"; then
   ext_shared=yes
 
   if test "$PHP_HUGE_CODE_PAGES" = "yes"; then
-    AC_DEFINE(HAVE_HUGE_CODE_PAGES, 1, [Define to enable copying PHP CODE pages into HUGE PAGES (experimental)])
   fi
 
   if test "$PHP_OPCACHE_JIT" = "yes"; then
     case $host_cpu in
-      x86*)
-        ;;
       *)
         AC_MSG_WARN([JIT not supported by host architecture])
         PHP_OPCACHE_JIT=no
