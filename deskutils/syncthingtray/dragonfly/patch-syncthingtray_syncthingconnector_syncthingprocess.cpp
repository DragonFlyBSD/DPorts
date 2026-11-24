--- syncthingtray/syncthingconnector/syncthingprocess.cpp.orig
+++ syncthingtray/syncthingconnector/syncthingprocess.cpp
@@ -552,7 +552,8 @@
             emit finished(0, QProcess::CrashExit);
         }
         const auto error = ec == std::errc::timed_out
-#ifdef ETIME
+/* libstdc++ has no errc::stream_timeout here; FreeBSD gets libc++'s */
+#if defined(ETIME) && !defined(__DragonFly__)
                 || ec == std::errc::stream_timeout
 #endif
             ? QProcess::Timedout
