--- ../syncthingtray/include/syncthingconnector/syncthingprocess.cpp.orig	2021-07-06 13:32:18 UTC
+++ ../syncthingtray/include/syncthingconnector/syncthingprocess.cpp
@@ -425,7 +425,11 @@ void SyncthingProcess::start(const QStri
         if (started) {
             emit finished(0, QProcess::CrashExit);
         }
+#ifdef __DragonFly__
+        const auto error = ec == std::errc::timed_out;  // XXX stream_timeout is under "#ifdef _GLIBCXX_HAVE_ETIME"
+#else
         const auto error = ec == std::errc::timed_out || ec == std::errc::stream_timeout ? QProcess::Timedout : QProcess::Crashed;
+#endif
         const auto msg = ec.message();
         std::cerr << EscapeCodes::Phrases::Error << "Unable to launch process: " << msg << EscapeCodes::Phrases::End;
         QMetaObject::invokeMethod(
