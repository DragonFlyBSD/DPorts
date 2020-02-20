--- wsgi/unixfork.cpp.orig	2019-09-25 13:54:40 UTC
+++ wsgi/unixfork.cpp
@@ -559,12 +559,12 @@ void UnixFork::setSched(CWSGI::WSGI *wsg
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
@@ -599,7 +599,7 @@ void UnixFork::setSched(CWSGI::WSGI *wsg
             base_cpu++;
         }
 #endif
-#if defined(__linux__) || defined(__GNU_kFreeBSD__)
+#if defined(__linux__) || defined(__GNU_kFreeBSD__) || defined(__DragonFly__)
         if (sched_setaffinity(0, sizeof(cpu_set_t), &cpuset)) {
             qFatal("failed to sched_setaffinity()");
         }
