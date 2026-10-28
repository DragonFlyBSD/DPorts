--- src/core/socket/SocketHelpers.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/socket/SocketHelpers.cpp
@@ -43,7 +43,7 @@ SSocketRawParsedMessage Hyprwire::parseFromFd(const Hyprutils::OS::CFileDescript
         if (sizeWritten < 0)
             return {.bad = true};
 
-        message.data.append_range(std::span<uint8_t>(buffer, sizeWritten));
+        { const auto& r_ = std::span<uint8_t>(buffer, sizeWritten); message.data.insert(message.data.end(), r_.begin(), r_.end()); }
 
         // check for control
         cmsghdr* recvdCmsg = CMSG_FIRSTHDR(&msg);
