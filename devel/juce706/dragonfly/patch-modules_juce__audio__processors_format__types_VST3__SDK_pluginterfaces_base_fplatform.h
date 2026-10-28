--- modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h.orig
+++ modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h
@@ -190,7 +190,7 @@
 //-----------------------------------------------------------------------------
 // BSD
 //-----------------------------------------------------------------------------
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 	#define SMTG_OS_LINUX	1 // atomic operations need to be implemented
 	#define SMTG_OS_MACOS	0
 	#define SMTG_OS_WINDOWS	0
