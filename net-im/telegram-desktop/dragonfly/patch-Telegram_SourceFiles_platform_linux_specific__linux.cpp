--- Telegram/SourceFiles/platform/linux/specific_linux.cpp.orig	2021-11-16 10:35:28 UTC
+++ Telegram/SourceFiles/platform/linux/specific_linux.cpp
@@ -42,7 +42,7 @@ https://github.com/telegramdesktop/tdesk
 
 #include <private/qguiapplication_p.h>
 
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) && !defined(__DragonFly__)
 #include <malloc_np.h>
 #else // Q_OS_FREEBSD
 #include <jemalloc/jemalloc.h>
