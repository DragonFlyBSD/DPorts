--- src/soplex/external/zstr/strict_fstream.hpp.orig	2026-07-02 09:02:20 UTC
+++ src/soplex/external/zstr/strict_fstream.hpp
@@ -64,7 +64,7 @@
     } else {
         return "Unknown error (" + std::to_string(err_num) + ")";
     }
-#elif ((_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600 || defined(__APPLE__) || defined(__FreeBSD__)) && ! _GNU_SOURCE) || defined(__MUSL__)
+#elif ((_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600 || defined(__APPLE__) || defined(__FreeBSD__)) && ! _GNU_SOURCE) || defined(__MUSL__) || defined(__DragonFly__)
 // XSI-compliant strerror_r()
     const int err_num = errno; // See above
     if (strerror_r(err_num, buff.data(), buff.size()) == 0) {
