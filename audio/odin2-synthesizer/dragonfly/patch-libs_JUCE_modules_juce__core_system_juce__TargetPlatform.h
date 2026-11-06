--- libs/JUCE/modules/juce_core/system/juce_TargetPlatform.h.orig	2026-11-06 08:49:16 UTC
+++ libs/JUCE/modules/juce_core/system/juce_TargetPlatform.h
@@ -62,7 +62,7 @@
 #elif defined (JUCE_ANDROID)
   #undef        JUCE_ANDROID
   #define       JUCE_ANDROID 1
-#elif defined (__FreeBSD__) || (__OpenBSD__)
+#elif defined (__FreeBSD__) || (__OpenBSD__) || defined (__DragonFly__)
   #define       JUCE_BSD 1
 #elif defined (LINUX) || defined (__linux__)
   #define       JUCE_LINUX 1
