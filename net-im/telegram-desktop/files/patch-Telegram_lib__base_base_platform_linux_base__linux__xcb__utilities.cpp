--- Telegram/lib_base/base/platform/linux/base_linux_xcb_utilities.cpp.orig	2026-07-14 05:25:20 UTC
+++ Telegram/lib_base/base/platform/linux/base_linux_xcb_utilities.cpp
@@ -142,7 +142,7 @@ rpl::lifetime InstallEventHandler(
 		}
 	}
 
-	const auto ptr = it->second.second.emplace_back(new Fn(handler)).get();
+	const auto ptr = it->second.second.emplace_back(new std::function(handler)).get();
 	return rpl::lifetime([=] {
 		const auto it = EventHandlers.find(connection);
 		it->second.second.erase(
