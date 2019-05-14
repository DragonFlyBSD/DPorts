--- src/posix/sdl/sdlvideo.cpp.orig	2016-02-22 02:11:13 UTC
+++ src/posix/sdl/sdlvideo.cpp
@@ -459,7 +459,7 @@ void SDLFB::Update ()
 
 	DrawRateStuff ();
 
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
 	if(vid_maxfps && !cl_capfps)
 	{
 		SEMAPHORE_WAIT(FPSLimitSemaphore)
