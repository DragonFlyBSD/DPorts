--- src/stats/StatsMemory.cpp.orig	2016-11-07 22:05:35 UTC
+++ src/stats/StatsMemory.cpp
@@ -184,7 +184,7 @@ void StatsMemory::update(long long sampl
 
 
 
-	len = sizeof(_buf);
+    len = sizeof(_buf);
     if (sysctlbyname("vfs.bufspace", &_buf, &len, NULL, 0) < 0)
     	_buf = 0;
 
