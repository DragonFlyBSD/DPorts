--- src/core/message/messages/HandshakeBegin.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/message/messages/HandshakeBegin.cpp
@@ -62,7 +62,7 @@ CHandshakeBeginMessage::CHandshakeBeginMessage(const std::vector<uint32_t>& vers
         HW_MESSAGE_MAGIC_TYPE_UINT,
     };
 
-    m_data.append_range(g_messageParser->encodeVarInt(versions.size()));
+    { const auto& r_ = g_messageParser->encodeVarInt(versions.size()); m_data.insert(m_data.end(), r_.begin(), r_.end()); }
 
     const size_t HEAD_SIZE = m_data.size();
 
