--- src/core/message/messages/BindProtocol.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/message/messages/BindProtocol.cpp
@@ -67,10 +67,10 @@ CBindProtocolMessage::CBindProtocolMessage(const std::string& protocol, uint32_t
 
     m_data.emplace_back(HW_MESSAGE_MAGIC_TYPE_VARCHAR);
 
-    m_data.append_range(g_messageParser->encodeVarInt(protocol.length()));
-    m_data.append_range(protocol);
+    { const auto& r_ = g_messageParser->encodeVarInt(protocol.length()); m_data.insert(m_data.end(), r_.begin(), r_.end()); }
+    { const auto& r_ = protocol; m_data.insert(m_data.end(), r_.begin(), r_.end()); }
 
-    m_data.append_range(std::vector<uint8_t>{HW_MESSAGE_MAGIC_TYPE_UINT, 0, 0, 0, 0});
+    { const auto& r_ = std::vector<uint8_t>{HW_MESSAGE_MAGIC_TYPE_UINT, 0, 0, 0, 0}; m_data.insert(m_data.end(), r_.begin(), r_.end()); }
 
     std::memcpy(&m_data[m_data.size() - 4], &version, sizeof(version));
 
