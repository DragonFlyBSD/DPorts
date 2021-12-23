--- modules/juce_core/native/juce_linux_SystemStats.cpp.orig	2021-03-26 08:19:54 UTC
+++ modules/juce_core/native/juce_linux_SystemStats.cpp
@@ -20,7 +20,7 @@
   ==============================================================================
 */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysinfo.h>
 #endif
 
