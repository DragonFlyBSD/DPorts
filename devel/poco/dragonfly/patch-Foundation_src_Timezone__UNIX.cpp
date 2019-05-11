--- Foundation/src/Timezone_UNIX.cpp.orig	2018-03-08 14:28:42 UTC
+++ Foundation/src/Timezone_UNIX.cpp
@@ -33,7 +33,7 @@ public:
 	{
 		Poco::FastMutex::ScopedLock lock(_mutex);
 
-	#if defined(__APPLE__)  || defined(__FreeBSD__) || defined (__OpenBSD__) || POCO_OS == POCO_OS_ANDROID // no timezone global var
+	#if defined(__APPLE__)  || defined(__DragonFly__) || defined(__FreeBSD__) || defined (__OpenBSD__) || POCO_OS == POCO_OS_ANDROID // no timezone global var
 		std::time_t now = std::time(NULL);
 		struct std::tm t;
 		gmtime_r(&now, &t);
