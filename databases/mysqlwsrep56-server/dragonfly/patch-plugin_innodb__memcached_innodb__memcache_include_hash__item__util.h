--- plugin/innodb_memcached/innodb_memcache/include/hash_item_util.h.orig	2020-05-23 20:11:13 UTC
+++ plugin/innodb_memcached/innodb_memcache/include/hash_item_util.h
@@ -2,6 +2,7 @@
 #define NDBMEMCACHE_HASH_ITEM_UTIL_H
 
 #include <sys/types.h>
+#include <arpa/inet.h>
 #include <stdint.h>
 
 #include <memcached/engine.h> 
