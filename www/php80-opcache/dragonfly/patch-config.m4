--- config.m4.orig	2021-06-19 22:06:16.127762000 +0200
+++ config.m4	2021-06-19 22:06:56.896825000 +0200
@@ -24,13 +24,10 @@
   ext_shared=yes
 
   if test "$PHP_HUGE_CODE_PAGES" = "yes"; then
-    AC_DEFINE(HAVE_HUGE_CODE_PAGES, 1, [Define to enable copying PHP CODE pages into HUGE PAGES (experimental)])
   fi
 
   if test "$PHP_OPCACHE_JIT" = "yes"; then
     case $host_cpu in
-      i[[34567]]86*|x86*|amd64)
-        ;;
       *)
         AC_MSG_WARN([JIT not supported by host architecture])
         PHP_OPCACHE_JIT=no
