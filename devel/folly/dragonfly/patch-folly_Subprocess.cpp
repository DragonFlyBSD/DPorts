--- folly/Subprocess.cpp.orig	2020-06-11 05:04:12 UTC
+++ folly/Subprocess.cpp
@@ -565,7 +565,7 @@ int Subprocess::prepareChild(
 #endif
 
   if (options.processGroupLeader_) {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     if (setpgrp() == -1) {
 #else
     if (setpgrp(getpid(), getpgrp()) == -1) {
