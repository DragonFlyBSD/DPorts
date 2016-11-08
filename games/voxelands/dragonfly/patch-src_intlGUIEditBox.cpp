--- src/intlGUIEditBox.cpp.orig	2016-04-30 06:49:46 UTC
+++ src/intlGUIEditBox.cpp
@@ -271,7 +271,7 @@ bool intlGUIEditBox::OnEvent(const SEven
 			break;
 		case EET_KEY_INPUT_EVENT:
 		{
-#if (defined(linux) || defined(__linux) || defined(__FreeBSD__))
+#if (defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__))
 			// ################################################################
 			// ValkaTR:
 			// This part is the difference from the original intlGUIEditBox
