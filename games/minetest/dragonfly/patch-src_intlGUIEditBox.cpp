--- src/intlGUIEditBox.cpp.orig	2018-06-10 15:18:11 UTC
+++ src/intlGUIEditBox.cpp
@@ -272,7 +272,7 @@ bool intlGUIEditBox::OnEvent(const SEven
 			break;
 		case EET_KEY_INPUT_EVENT:
         {
-#if (defined(__linux__) || defined(__FreeBSD__))
+#if (defined(__linux__) || defined(__FreeBSD__)) || defined(__DragonFly__)
             // ################################################################
 			// ValkaTR:
             // This part is the difference from the original intlGUIEditBox
