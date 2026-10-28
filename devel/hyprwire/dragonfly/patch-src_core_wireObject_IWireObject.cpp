--- src/core/wireObject/IWireObject.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/wireObject/IWireObject.cpp
@@ -146,8 +146,8 @@ uint32_t IWireObject::call(uint32_t id, ...) {
             case HW_MESSAGE_MAGIC_TYPE_VARCHAR: {
                 data.emplace_back(HW_MESSAGE_MAGIC_TYPE_VARCHAR);
                 auto str = va_arg(va, const char*);
-                data.append_range(g_messageParser->encodeVarInt(std::string_view(str).size()));
-                data.append_range(std::string_view(str));
+                { const auto& r_ = g_messageParser->encodeVarInt(std::string_view(str).size()); data.insert(data.end(), r_.begin(), r_.end()); }
+                { const auto& r_ = std::string_view(str); data.insert(data.end(), r_.begin(), r_.end()); }
                 break;
             }
 
@@ -158,7 +158,7 @@ uint32_t IWireObject::call(uint32_t id, ...) {
 
                 auto arrayData = va_arg(va, void*);
                 auto arrayLen  = va_arg(va, uint32_t);
-                data.append_range(g_messageParser->encodeVarInt(arrayLen));
+                { const auto& r_ = g_messageParser->encodeVarInt(arrayLen); data.insert(data.end(), r_.begin(), r_.end()); }
 
                 switch (arrType) {
                     case HW_MESSAGE_MAGIC_TYPE_UINT:
@@ -181,8 +181,8 @@ uint32_t IWireObject::call(uint32_t id, ...) {
                     case HW_MESSAGE_MAGIC_TYPE_VARCHAR: {
                         for (size_t i = 0; i < arrayLen; ++i) {
                             const char* element = rc<const char**>(arrayData)[i];
-                            data.append_range(g_messageParser->encodeVarInt(std::string_view(element).size()));
-                            data.append_range(std::string_view(element));
+                            { const auto& r_ = g_messageParser->encodeVarInt(std::string_view(element).size()); data.insert(data.end(), r_.begin(), r_.end()); }
+                            { const auto& r_ = std::string_view(element); data.insert(data.end(), r_.begin(), r_.end()); }
                         }
                         break;
                     }
@@ -264,7 +264,7 @@ void IWireObject::called(uint32_t id, const std::span<const uint8_t>& data, cons
     if (!method.returnsType.empty())
         params.emplace_back(HW_MESSAGE_MAGIC_TYPE_SEQ);
 
-    params.append_range(method.params);
+    { const auto& r_ = method.params; params.insert(params.end(), r_.begin(), r_.end()); }
 
     if (method.since > m_version) {
         const auto MSG = std::format("method {} since {} but has {}", id, method.since, m_version);
