--- modules/juce_audio_processors_headless/format_types/VST3_SDK/pluginterfaces/base/fplatform.h.orig
+++ modules/juce_audio_processors_headless/format_types/VST3_SDK/pluginterfaces/base/fplatform.h
@@ -189,7 +189,7 @@
 //-----------------------------------------------------------------------------
 // BSD
 //-----------------------------------------------------------------------------
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 	#define SMTG_OS_LINUX		1
 	#define SMTG_OS_MACOS		0
 	#define SMTG_OS_WINDOWS		0
