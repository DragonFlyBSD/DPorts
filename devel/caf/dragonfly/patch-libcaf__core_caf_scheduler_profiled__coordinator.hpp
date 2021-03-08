XXX missing RUSAGE_THREAD in <sys/resource.h>

--- libcaf_core/caf/scheduler/profiled_coordinator.hpp.orig	2021-01-25 11:24:08 UTC
+++ libcaf_core/caf/scheduler/profiled_coordinator.hpp
@@ -92,7 +92,7 @@ public:
       m.mem = pmc.PeakWorkingSetSize / 1024;
       m.usr = to_usec(user_time);
       m.sys = to_usec(kernel_time);
-#elif defined(CAF_CYGWIN)
+#elif defined(CAF_CYGWIN) || defined(__DragonFly__)
       // TODO - decide what to do here instead of zeros
       m.usr = usec::zero();
       m.sys = usec::zero();
