--- electron/shell/browser/relauncher_linux.cc.intermediate	2022-12-11 18:54:29 UTC
+++ electron/shell/browser/relauncher_linux.cc
@@ -6,7 +6,7 @@
 
 #include <fcntl.h>
 #include <signal.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #include <sys/signalfd.h>
 #endif
@@ -28,7 +28,7 @@ void RelauncherSynchronizeWithParent() {
   base::ScopedFD relauncher_sync_fd(kRelauncherSyncFD);
   static const auto signum = SIGUSR2;
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   PLOG(ERROR) << "signalfd & prctl";
   fprintf(stderr, "Not Implemented signalfd & prctl in atom/browser/relauncher_linux.cc");
 #else
