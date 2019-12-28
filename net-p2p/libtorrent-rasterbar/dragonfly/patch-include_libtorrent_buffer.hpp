--- include/libtorrent/buffer.hpp.orig	2019-12-19 14:40:45 UTC
+++ include/libtorrent/buffer.hpp
@@ -49,7 +49,7 @@ POSSIBILITY OF SUCH DAMAGE.
 #include <malloc.h>
 #elif defined __FreeBSD__
 #include <malloc_np.h>
-#elif defined TORRENT_BSD
+#elif defined TORRENT_BSD && !defined(__DragonFly__)
 #include <malloc/malloc.h>
 #endif
 
@@ -89,7 +89,7 @@ public:
 		m_size = static_cast<difference_type>(::malloc_usable_size(m_begin));
 #elif defined _MSC_VER
 		m_size = static_cast<difference_type>(::_msize(m_begin));
-#elif defined TORRENT_BSD
+#elif defined TORRENT_BSD && !defined(__DragonFly__)
 		m_size = static_cast<difference_type>(::malloc_size(m_begin));
 #else
 		m_size = size;
