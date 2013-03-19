--- src/utp_stream.cpp.orig	2012-10-18 07:29:00.000000000 +0000
+++ src/utp_stream.cpp
@@ -30,6 +30,8 @@ POSSIBILITY OF SUCH DAMAGE.
 
 */
 
+#define	__STDC_LIMIT_MACROS 1
+
 #include "libtorrent/config.hpp"
 #include "libtorrent/utp_stream.hpp"
 #include "libtorrent/sliding_average.hpp"
