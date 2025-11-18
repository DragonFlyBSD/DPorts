--- Telegram/lib_webview/webview/webview_data_stream_memory.cpp.intermediate	Mon Oct 13 22:09:02 2025
+++ Telegram/lib_webview/webview/webview_data_stream_memory.cpp	Mon Oct
@@ -18,7 +18,7 @@ DataStreamFromMemory::DataStreamFromMemory(
 	std::string mime)
 : _data(data)
 , _mime(mime) {
-#if !defined Q_OS_WIN && !defined Q_OS_MAC
+#if !defined Q_OS_WIN && !defined Q_OS_MAC && !defined Q_OS_DRAGONFLY
 	const auto handle = memfd_create("webview-data-stream", MFD_CLOEXEC);
 	if (handle == -1) {
 		return;
