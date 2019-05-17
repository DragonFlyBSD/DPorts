--- src/process.cc.orig	2018-10-03 16:04:54 UTC
+++ src/process.cc
@@ -44,7 +44,7 @@
 
 // basic operating system test
 #if !(defined(__MSDOS__)||defined(__linux__)|| \
-      defined(__WIN32__)||defined(__FreeBSD__))
+      defined(__WIN32__)||defined(__FreeBSD__)||defined(__DragonFly__))
 # error "module process.cc is not implemented on this operating system"
 #endif
 
