--- SimTKcommon/src/ParallelExecutor.cpp.orig
+++ SimTKcommon/src/ParallelExecutor.cpp
@@ -182,7 +182,7 @@
 #ifdef __APPLE__
    #include <sys/sysctl.h>
    #include <dlfcn.h>
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
     #include <sys/types.h>
     #include <sys/sysctl.h>
 #elif _WIN32
@@ -205,7 +205,7 @@
     } else {
        return(1);
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     int mib[2];
     int ncpu;
     size_t szNcpu = sizeof(ncpu);
