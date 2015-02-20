--- m4/ax_platform.m4.orig	2014-02-09 11:52:42 UTC
+++ m4/ax_platform.m4
@@ -40,7 +40,7 @@
 # define SHUT_RDWR SD_BOTH
 #endif
           ])],
-        [*freebsd*],[AC_DEFINE([HOST_OS_FREEBSD],[1],[Whether we are building for FreeBSD])
+        [*freebsd*|*dragonfly*],[AC_DEFINE([HOST_OS_FREEBSD],[1],[Whether we are building for FreeBSD])
         AC_DEFINE([__APPLE_CC__],[1],[Workaround for bug in FreeBSD headers])],
         [*solaris*],[AC_DEFINE([HOST_OS_SOLARIS],[1],[Whether we are building for Solaris])],
         [*darwin*],
