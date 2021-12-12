--- Telegram/ThirdParty/libtgvoip/threading.h.orig	2021-09-17 06:49:49 UTC
+++ Telegram/ThirdParty/libtgvoip/threading.h
@@ -18,7 +18,7 @@
 #ifdef __APPLE__
 #include "os/darwin/DarwinSpecific.h"
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -95,7 +95,7 @@ namespace tgvoip{
 		static void* ActualEntryPoint(void* arg){
 			Thread* self=reinterpret_cast<Thread*>(arg);
 			if(self->name){
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 				pthread_setname_np(self->thread, self->name);
 #elif defined(__APPLE__)
 				pthread_setname_np(self->name);
