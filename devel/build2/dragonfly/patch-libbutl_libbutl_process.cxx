--- libbutl/libbutl/process.cxx.orig	2026-04-09 13:45:10 UTC
+++ libbutl/libbutl/process.cxx
@@ -73,6 +73,7 @@
 // _NSIG is Linux-specific but *BSD and MacOS appear to have NSIG/_NSIG.
 //
 #  if defined(__FreeBSD__) || \
+      defined(__DragonFly__) || \
       defined(__OpenBSD__) || \
       defined(__NetBSD__)  || \
       defined(__APPLE__)
