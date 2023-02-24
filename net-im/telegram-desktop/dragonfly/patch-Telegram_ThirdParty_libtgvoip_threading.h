--- Telegram/ThirdParty/libtgvoip/threading.h.orig	2022-12-29 05:18:32 UTC
+++ Telegram/ThirdParty/libtgvoip/threading.h
@@ -17,7 +17,7 @@
 #include <unistd.h>
 #if defined(__APPLE__)
 #include "os/darwin/DarwinSpecific.h"
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -94,7 +94,7 @@ namespace tgvoip{
 		static void* ActualEntryPoint(void* arg){
 			Thread* self=reinterpret_cast<Thread*>(arg);
 			if(self->name){
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 				pthread_setname_np(self->thread, self->name);
 #elif defined(__OpenBSD__)
 				pthread_set_name_np(self->thread, self->name);
