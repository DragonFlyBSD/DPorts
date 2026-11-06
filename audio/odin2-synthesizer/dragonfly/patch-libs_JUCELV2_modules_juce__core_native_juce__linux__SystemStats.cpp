--- libs/JUCELV2/modules/juce_core/native/juce_linux_SystemStats.cpp.orig	2026-11-06 08:49:17 UTC
+++ libs/JUCELV2/modules/juce_core/native/juce_linux_SystemStats.cpp
@@ -358,7 +358,7 @@ JUCE_API bool JUCE_CALLTYPE juce_isRunningUnderDebugge
     struct kinfo_proc info;
     auto infoSize = sizeof (info);
     auto result = sysctl (mib, numElementsInArray (mib), &info, &infoSize, nullptr, 0);
-    return result == 0 ? ((info.ki_flag & P_TRACED) != 0) : false;
+    return result == 0 ? ((info.kp_flags & P_TRACED) != 0) : false;
    #else
     return readPosixConfigFileValue ("/proc/self/status", "TracerPid").getIntValue() > 0;
    #endif
