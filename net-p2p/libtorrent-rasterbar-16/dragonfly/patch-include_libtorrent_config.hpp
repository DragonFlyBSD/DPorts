--- include/libtorrent/config.hpp.orig	2012-11-30 05:29:34.000000000 +0000
+++ include/libtorrent/config.hpp
@@ -182,6 +182,8 @@ POSSIBILITY OF SUCH DAMAGE.
 #define TORRENT_USE_LOCALE 0
 #define TORRENT_CLOSE_MAY_BLOCK 1
 #endif
+#elif defined __DragonFly__
+#define TORRENT_ICONV_ARG (char**)
 #else
 // FreeBSD has a reasonable iconv signature
 #define TORRENT_ICONV_ARG (const char**)
