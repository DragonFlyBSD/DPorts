--- folly/Subprocess.cpp.orig
+++ folly/Subprocess.cpp
@@ -1309,7 +1309,7 @@ int Subprocess::prepareChild(SpawnRawArgs const& args) {
 #endif
 
   if (args.processGroupLeader) {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     if (setpgrp() == -1) {
 #else
     if (setpgrp(getpid(), getpgrp()) == -1) {
