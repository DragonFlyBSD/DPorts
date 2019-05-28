--- JuceLibraryCode/modules/juce_core/native/juce_posix_SharedCode.h.intermediate	2019-05-26 13:31:14.000000000 +0000
+++ JuceLibraryCode/modules/juce_core/native/juce_posix_SharedCode.h
@@ -19,6 +19,8 @@
 
   ==============================================================================
 */
+#include <pthread.h>
+#include <pthread_np.h>
 
 namespace juce
 {
