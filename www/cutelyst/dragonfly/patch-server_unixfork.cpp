--- server/unixfork.cpp.orig	2021-07-30 19:54:47 UTC
+++ server/unixfork.cpp
@@ -566,12 +566,12 @@ void UnixFork::setSched(Cutelyst::Server
             qCCritical(WSGI_UNIX) << "unable to initialize cpu affinity !!!";
             exit(1);
         }
-#if defined(__linux__) || defined(__GNU_kFreeBSD__)
+#if defined(__linux__) || defined(__GNU_kFreeBSD__) || defined(__DragonFly__)
         cpu_set_t cpuset;
 #elif defined(__FreeBSD__)
         cpuset_t cpuset;
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__GNU_kFreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__GNU_kFreeBSD__) || defined(__DragonFly__)
         int coreCount = idealThreadCount();
 
         int workerThreads = 1;
@@ -606,7 +606,7 @@ void UnixFork::setSched(Cutelyst::Server
             base_cpu++;
         }
 #endif
-#if defined(__linux__) || defined(__GNU_kFreeBSD__)
+#if defined(__linux__) || defined(__GNU_kFreeBSD__) || defined(__DragonFly__)
         if (sched_setaffinity(0, sizeof(cpu_set_t), &cpuset)) {
             qFatal("failed to sched_setaffinity()");
         }
