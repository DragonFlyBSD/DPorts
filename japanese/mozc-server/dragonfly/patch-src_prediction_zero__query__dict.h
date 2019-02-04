--- src/prediction/zero_query_dict.h.orig	2017-01-01 19:27:55.000000000 +0000
+++ src/prediction/zero_query_dict.h	2019-02-03 01:14:53.000000000 +0000
@@ -147,6 +147,17 @@
       return iter;
     }
 
+    iterator &operator--() {
+      ptr_ -= kTokenByteSize;
+      return *this;
+    }
+
+    iterator operator--(int) {
+      const iterator tmp(ptr_, string_array_);
+      ptr_ -= kTokenByteSize;
+      return tmp;
+    }
+
     iterator &operator-=(ptrdiff_t n) {
       ptr_ -= n * kTokenByteSize;
       return *this;
