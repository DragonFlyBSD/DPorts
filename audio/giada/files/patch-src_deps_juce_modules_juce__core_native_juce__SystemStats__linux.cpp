--- src/deps/juce/modules/juce_core/native/juce_SystemStats_linux.cpp.orig	2026-07-15 11:47:08 UTC
+++ src/deps/juce/modules/juce_core/native/juce_SystemStats_linux.cpp
@@ -32,6 +32,10 @@
   ==============================================================================
 */
 
+#if JUCE_BSD
+#include <sys/user.h>
+#endif
+
 namespace juce
 {
 
