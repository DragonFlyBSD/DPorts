--- third_party/abseil-cpp/absl/status/status.cc.orig	2023-10-10 18:15:15 UTC
+++ third_party/abseil-cpp/absl/status/status.cc
@@ -467,14 +467,18 @@ StatusCode ErrnoToStatusCode(int error_n
     case EFAULT:        // Bad address
     case EILSEQ:        // Illegal byte sequence
     case ENOPROTOOPT:   // Protocol not available
+#ifdef ENOSTR
     case ENOSTR:        // Not a STREAM
+#endif
     case ENOTSOCK:      // Not a socket
     case ENOTTY:        // Inappropriate I/O control operation
     case EPROTOTYPE:    // Protocol wrong type for socket
     case ESPIPE:        // Invalid seek
       return StatusCode::kInvalidArgument;
     case ETIMEDOUT:  // Connection timed out
+#ifdef ETIME
     case ETIME:      // Timer expired
+#endif
       return StatusCode::kDeadlineExceeded;
     case ENODEV:  // No such device
     case ENOENT:  // No such file or directory
@@ -533,9 +537,13 @@ StatusCode ErrnoToStatusCode(int error_n
     case EMLINK:   // Too many links
     case ENFILE:   // Too many open files in system
     case ENOBUFS:  // No buffer space available
+#ifdef ENODATA
     case ENODATA:  // No message is available on the STREAM read queue
+#endif
     case ENOMEM:   // Not enough space
+#ifdef ENOSR
     case ENOSR:    // No STREAM resources
+#endif
 #ifdef EUSERS
     case EUSERS:  // Too many users
 #endif
