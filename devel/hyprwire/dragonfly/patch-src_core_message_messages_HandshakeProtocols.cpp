--- src/core/message/messages/HandshakeProtocols.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/message/messages/HandshakeProtocols.cpp
@@ -61,11 +61,11 @@ CHandshakeProtocolsMessage::CHandshakeProtocolsMessage(const std::vector<std::st
         HW_MESSAGE_MAGIC_TYPE_VARCHAR,
     };
 
-    m_data.append_range(g_messageParser->encodeVarInt(protocols.size()));
+    { const auto& r_ = g_messageParser->encodeVarInt(protocols.size()); m_data.insert(m_data.end(), r_.begin(), r_.end()); }
 
     for (const auto& p : protocols) {
-        m_data.append_range(g_messageParser->encodeVarInt(p.size()));
-        m_data.append_range(p);
+        { const auto& r_ = g_messageParser->encodeVarInt(p.size()); m_data.insert(m_data.end(), r_.begin(), r_.end()); }
+        { const auto& r_ = p; m_data.insert(m_data.end(), r_.begin(), r_.end()); }
     }
 
     m_data.emplace_back(HW_MESSAGE_MAGIC_END);
