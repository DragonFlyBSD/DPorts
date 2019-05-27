--- JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF8.h.intermediate	2019-05-26 13:31:14.000000000 +0000
+++ JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF8.h
@@ -19,6 +19,7 @@
 
   ==============================================================================
 */
+#include <cstring> // for strlen()
 
 namespace juce
 {
