--- third_party/abseil-cpp/absl/status/status.cc.orig	2022-10-15 18:56:03.346469000 +0200
+++ third_party/abseil-cpp/absl/status/status.cc	2022-10-15 19:10:10.267657000 +0200
@@ -13,7 +13,7 @@
 // limitations under the License.
 #include "absl/status/status.h"
 
-#include <errno.h>
+#include <sys/errno.h>
 
 #include <cassert>
 
@@ -460,15 +460,19 @@
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
       return StatusCode::kDeadlineExceeded;
+#endif
     case ENODEV:  // No such device
     case ENOENT:  // No such file or directory
 #ifdef ENOMEDIUM
@@ -526,9 +530,13 @@
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
