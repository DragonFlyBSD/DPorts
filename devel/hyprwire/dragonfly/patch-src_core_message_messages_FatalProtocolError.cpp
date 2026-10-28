--- src/core/message/messages/FatalProtocolError.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/message/messages/FatalProtocolError.cpp
@@ -68,7 +68,7 @@ CFatalErrorMessage::CFatalErrorMessage(uint32_t objectId, uint32_t errorId, cons
     std::memcpy(&m_data[2], &objectId, sizeof(objectId));
     std::memcpy(&m_data[7], &errorId, sizeof(errorId));
 
-    m_data.append_range(g_messageParser->encodeVarInt(msg.size()));
-    m_data.append_range(msg);
+    { const auto& r_ = g_messageParser->encodeVarInt(msg.size()); m_data.insert(m_data.end(), r_.begin(), r_.end()); }
+    { const auto& r_ = msg; m_data.insert(m_data.end(), r_.begin(), r_.end()); }
     m_data.emplace_back(HW_MESSAGE_MAGIC_END);
 }
