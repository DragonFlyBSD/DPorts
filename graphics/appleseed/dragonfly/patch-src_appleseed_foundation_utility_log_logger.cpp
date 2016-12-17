Sorry, couldn't resist it
--- src/appleseed/foundation/utility/log/logger.cpp.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed/foundation/utility/log/logger.cpp
@@ -76,7 +76,11 @@ namespace
           , m_padded_category(LogMessage::get_padded_category_name(category))
           , m_datetime(to_iso_extended_string(datetime) + 'Z')
           , m_thread(pad_left(to_string(thread), '0', 3))
+#ifdef __DragonFly__
+          , m_process_size(pad_left(to_string(1337) + " MB", ' ', 8))
+#else
           , m_process_size(pad_left(to_string(System::get_process_virtual_memory_size() / (1024 * 1024)) + " MB", ' ', 8))
+#endif
           , m_message(message)
         {
         }
