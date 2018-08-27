--- COLLADABaseUtils/include/COLLADABUhash_map.h.orig	2018-08-27 19:38:57 UTC
+++ COLLADABaseUtils/include/COLLADABUhash_map.h
@@ -60,7 +60,7 @@
         #define COLLADABU_HASH_NAMESPACE_CLOSE }
         #define COLLADABU_HASH_FUN hash
     #endif
-#elif (defined(__APPLE__) || defined(__FreeBSD__)) && defined(_LIBCPP_VERSION)
+#elif (defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)) && defined(_LIBCPP_VERSION)
     #include <unordered_map>
     #include <unordered_set>
     #define COLLADABU_HASH_MAP std::unordered_map
