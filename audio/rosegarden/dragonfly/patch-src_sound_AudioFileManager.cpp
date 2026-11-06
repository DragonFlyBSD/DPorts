--- src/sound/AudioFileManager.cpp.orig	2025-12-02 20:52:28 UTC
+++ src/sound/AudioFileManager.cpp
@@ -89,7 +89,7 @@ AudioFileManager::AudioFileManager(RosegardenDocument 
 
     pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
 #else
-#if defined(PTHREAD_MUTEX_RECURSIVE) || defined(__FreeBSD__)
+#if defined(PTHREAD_MUTEX_RECURSIVE) || defined(__FreeBSD__) || defined(__DragonFly__)
     pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
 #else
 
