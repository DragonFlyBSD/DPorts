--- Makefile.PL.orig	2009-04-29 22:06:39.000000000 +0300
+++ Makefile.PL
@@ -29,6 +29,7 @@ my %supported_OS = (
     cygwin => 'cygwin',
     linux => 'linux',
     solaris => 'solaris',
+    dragonfly => 'dragonfly',
     freebsd => 'freebsd',
     openbsd => 'openbsd',
     macos => 'MacOS',
