--- JuceLibraryCode/modules/juce_core/system/juce_TargetPlatform.h.intermediate	2019-05-26 13:29:59.000000000 +0000
+++ JuceLibraryCode/modules/juce_core/system/juce_TargetPlatform.h
@@ -63,7 +63,7 @@
 #elif defined (JUCE_ANDROID)
   #undef        JUCE_ANDROID
   #define       JUCE_ANDROID 1
-#elif defined (__FreeBSD__) || (__OpenBSD__)
+#elif defined (__FreeBSD__) || (__OpenBSD__) || defined(__DragonFly__)
   #define       JUCE_BSD 1
 #elif defined (LINUX) || defined (__linux__)
   #define     JUCE_LINUX 1
