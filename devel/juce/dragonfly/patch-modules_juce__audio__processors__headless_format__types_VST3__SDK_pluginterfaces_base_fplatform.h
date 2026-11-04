--- modules/juce_audio_processors_headless/format_types/VST3_SDK/pluginterfaces/base/fplatform.h.intermediate	2026-07-21 03:18:06 UTC
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
@@ -240,7 +240,10 @@
 		#define SMTG_CPP17 (__cplusplus >= 201703L)
 		#define SMTG_CPP20 (__cplusplus >= 202002L)
 		#define SMTG_CPP23 (__cplusplus >= 202302L)
+		// DragonFly uses gcc, whose libstdc++ has the Linux __gnu_cxx atomics
+		#if !defined(__DragonFly__)
 		#define SMTG_USE_STDATOMIC_H 1
+		#endif
 		#define SMTG_CPP11_STDLIBSUPPORT 1
 		#define SMTG_HAS_NOEXCEPT 1
 		#define SMTG_HAS_CPP11_CONSTEXPR SMTG_CPP11
