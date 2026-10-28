--- modules/juce_javascript/choc/javascript/choc_javascript_QuickJS.h.orig
+++ modules/juce_javascript/choc/javascript/choc_javascript_QuickJS.h
@@ -55,7 +55,7 @@
 #include <malloc/malloc.h>
 #elif defined(__linux__)
 #include <malloc.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <malloc_np.h>
 #endif
 
