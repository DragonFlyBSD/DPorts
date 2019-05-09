--- SimTKcommon/src/ParallelExecutor.cpp.intermediate	2019-05-09 13:28:02.000000000 +0000
+++ SimTKcommon/src/ParallelExecutor.cpp
@@ -29,7 +29,7 @@
 #include <algorithm>
 #include <mutex>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -192,7 +192,7 @@ void ParallelExecutor::execute(Task& tas
 #elif __linux__
    #include <dlfcn.h>
    #include <unistd.h>
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
    #include <dlfcn.h>
    #include <unistd.h>
 #else
@@ -219,7 +219,7 @@ int ParallelExecutor::getNumProcessors()
         return( (int)nProcessorsOnline );
     }
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     int ncpu,retval;
     size_t len = 4;
 
