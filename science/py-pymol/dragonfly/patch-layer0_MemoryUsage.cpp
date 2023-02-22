--- layer0/MemoryUsage.cpp.orig	2023-02-20 23:11:55 UTC
+++ layer0/MemoryUsage.cpp
@@ -51,7 +51,7 @@ size_t memory_usage()
     GetProcessMemoryInfo(hProcess.get(), &pmc, sizeof(pmc));
   }
   return pmc.WorkingSetSize;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return 0; // TODO implement memory_usage()
 #else
 #error "platform not handled"
@@ -94,7 +94,7 @@ size_t memory_available()
   statex.dwLength = sizeof(statex);
   GlobalMemoryStatusEx(&statex);
   return statex.ullAvailPhys;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return 0; // TODO: implement memory_available()
 #else
 #error "platform not handled"
