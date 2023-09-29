diff --git base/third_party/cityhash/city.cc base/third_party/cityhash/city.cc
index db7afa1e511..2eb60ab24b8 100644
--- base/third_party/cityhash/city.cc
+++ base/third_party/cityhash/city.cc
@@ -61,7 +61,7 @@ using std::pair;
 #define bswap_32(x) BSWAP_32(x)
 #define bswap_64(x) BSWAP_64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #define bswap_32(x) bswap32(x)
