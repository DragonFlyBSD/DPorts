--- src/guiChatConsole.cpp.orig	2014-11-24 19:24:31.000000000 +0200
+++ src/guiChatConsole.cpp
@@ -588,7 +588,7 @@ bool GUIChatConsole::OnEvent(const SEven
 		}
 		else if(event.KeyInput.Char != 0 && !event.KeyInput.Control)
 		{
-			#if (defined(linux) || defined(__linux) || defined(__FreeBSD__))
+			#if (defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__))
 				wchar_t wc = L'_';
 				mbtowc( &wc, (char *) &event.KeyInput.Char, sizeof(event.KeyInput.Char) );
 				m_chat_backend->getPrompt().input(wc);
