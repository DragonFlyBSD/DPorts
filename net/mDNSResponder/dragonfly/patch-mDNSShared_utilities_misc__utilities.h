--- mDNSShared/utilities/misc_utilities.h.orig	2023-01-24 00:43:17 UTC
+++ mDNSShared/utilities/misc_utilities.h
@@ -21,6 +21,9 @@
 // MARK: - Headers
 
 #include <netinet/in.h>			// For sockaddr.
+#ifdef __DragonFly__
+#include <sys/socket.h>
+#endif
 #include "nullability.h"		// For NULLABLE and NONNULL.
 #include "mDNSEmbeddedAPI.h"	// For mDNSAddr.
 
