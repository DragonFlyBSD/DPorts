--- src/posix/sdl/hardware.cpp.orig	2016-02-22 02:11:13 UTC
+++ src/posix/sdl/hardware.cpp
@@ -204,7 +204,7 @@ void I_ClosestResolution (int *width, in
 EXTERN_CVAR(Int, vid_maxfps);
 EXTERN_CVAR(Bool, cl_capfps);
 
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
 Semaphore FPSLimitSemaphore;
 
 static void FPSLimitNotify(sigval val)
