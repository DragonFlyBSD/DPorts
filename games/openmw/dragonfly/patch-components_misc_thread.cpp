--- components/misc/thread.cpp.orig	2021-10-10 16:17:03 UTC
+++ components/misc/thread.cpp
@@ -41,7 +41,7 @@ namespace Misc
     }
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <sys/rtprio.h>
@@ -53,7 +53,11 @@ namespace Misc
         struct rtprio prio;
         prio.type = RTP_PRIO_IDLE;
         prio.prio = RTP_PRIO_MAX;
+#ifdef __DragonFly__
+        if (lwp_rtprio(RTP_SET, 0, -1, &prio) == 0)
+#else
         if (rtprio_thread(RTP_SET, 0, &prio) == 0)
+#endif
             Log(Debug::Verbose) << "Using idle priority for thread=" << std::this_thread::get_id();
         else
             Log(Debug::Warning) << "Failed to set idle priority for thread=" << std::this_thread::get_id() << ": " << std::strerror(errno);
