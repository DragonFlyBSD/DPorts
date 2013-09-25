--- include/libtorrent/config.hpp.orig	2013-06-24 06:40:48.000000000 +0000
+++ include/libtorrent/config.hpp
@@ -37,6 +37,7 @@ POSSIBILITY OF SUCH DAMAGE.
 #include <boost/version.hpp>
 #include <stdio.h> // for snprintf
 #include <limits.h> // for IOV_MAX
+#include <sys/param.h> // for os version
 
 #if defined TORRENT_DEBUG_BUFFERS && !defined TORRENT_DISABLE_POOL_ALLOCATOR
 #error TORRENT_DEBUG_BUFFERS only works if you also disable pool allocators with TORRENT_DISABLE_POOL_ALLOCATOR
@@ -184,6 +185,8 @@ POSSIBILITY OF SUCH DAMAGE.
 // execinfo.h is available in the MacOS X 10.5 SDK.
 #define TORRENT_USE_EXECINFO MAC_OS_X_VERSION_MIN_REQUIRED >= 1050
 #endif
+#elif defined (__DragonFly__) && __DragonFly_version < 300503
+#define TORRENT_ICONV_ARG (char**)
 #else
 // FreeBSD has a reasonable iconv signature
 // unless we're on glibc
