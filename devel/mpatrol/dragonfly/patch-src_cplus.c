--- ../../src/cplus.c.orig
+++ ../../src/cplus.c
@@ -94,7 +94,7 @@
 MP_API
 #ifdef __cplusplus
 void *
-operator new(size_t l) throw(std::bad_alloc)
+operator new(size_t l)
 #elif defined(__GNUC__)
 void *
 __builtin_new(size_t l)
@@ -161,7 +161,7 @@
 MP_API
 #ifdef __cplusplus
 void *
-operator new[](size_t l) throw(std::bad_alloc)
+operator new[](size_t l)
 #elif defined(__GNUC__)
 void *
 __builtin_vec_new(size_t l)
