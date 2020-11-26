--- src/xerrorhandler.cpp.orig	2020-07-18 14:12:20 UTC
+++ src/xerrorhandler.cpp
@@ -139,7 +139,7 @@ int DuneApp::emergency_rescue(int sig)
 # if __MAGEIA__
  __attribute__((noreturn))
 # endif
-# ifdef __FreeBSD__
+# if defined __FreeBSD__ || defined __DragonFly__
  __attribute__((noreturn))
 # endif
 # ifdef MACOSX
