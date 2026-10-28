--- modules/juce_core/native/juce_SystemStats_linux.cpp.orig
+++ modules/juce_core/native/juce_SystemStats_linux.cpp
@@ -423,7 +423,11 @@
     struct kinfo_proc info;
     auto infoSize = sizeof (info);
     auto result = sysctl (mib, numElementsInArray (mib), &info, &infoSize, nullptr, 0);
+   #if defined (__DragonFly__)
+    return result == 0 ? ((info.kp_flags & P_TRACED) != 0) : false;
+   #else
     return result == 0 ? ((info.ki_flag & P_TRACED) != 0) : false;
+   #endif
    #else
     return readPosixConfigFileValue ("/proc/self/status", "TracerPid").getIntValue() > 0;
    #endif
