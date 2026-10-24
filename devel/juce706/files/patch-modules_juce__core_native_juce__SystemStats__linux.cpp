--- modules/juce_core/native/juce_SystemStats_linux.cpp.orig	2026-07-15 11:00:01 UTC
+++ modules/juce_core/native/juce_SystemStats_linux.cpp
@@ -20,6 +20,10 @@
   ==============================================================================
 */
 
+#if JUCE_BSD
+#include <sys/user.h>
+#endif
+
 #if JUCE_BELA
 extern "C" int cobalt_thread_mode();
 #endif
