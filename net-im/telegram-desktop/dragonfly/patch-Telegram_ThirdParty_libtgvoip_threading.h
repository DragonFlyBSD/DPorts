--- Telegram/ThirdParty/libtgvoip/threading.h.intermediate	2020-04-01 17:31:33 UTC
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
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 				pthread_set_name_np(self->thread, self->name);
 #elif !defined(__APPLE__) && !defined(__gnu_hurd__)
 				pthread_setname_np(self->thread, self->name);
