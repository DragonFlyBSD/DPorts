--- src/intlGUIEditBox.cpp.orig	2014-11-24 19:24:31.000000000 +0200
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
