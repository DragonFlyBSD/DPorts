--- third_party/federated_compute/third_party/protodatastore-cpp/src/protostore/file-storage.cc.orig	2026-09-20 16:46:11 UTC
+++ third_party/federated_compute/third_party/protodatastore-cpp/src/protostore/file-storage.cc
@@ -130,7 +130,7 @@
     case ENETUNREACH:   // Network unreachable
     case ENOLCK:        // No locks available
     case ENOLINK:       // Link has been severed
-#if !(defined(__APPLE__) || defined(__FreeBSD__) || defined(_WIN32) || defined(__OpenBSD__))
+#if !(defined(__APPLE__) || defined(__FreeBSD__) || defined(_WIN32) || defined(__OpenBSD__) || defined(__DragonFly__))
     case ENONET:  // Machine is not on the network
 #endif
       return absl::UnavailableError(message);
