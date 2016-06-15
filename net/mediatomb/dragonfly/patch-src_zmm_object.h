--- src/zmm/object.h.orig	2010-03-25 16:58:08.000000000 +0200
+++ src/zmm/object.h
@@ -48,7 +48,7 @@ public:
     void release();
     int getRefCount();
 
-    static void* operator new (size_t size); 
+    static void* operator new (std::size_t size); 
     static void operator delete (void *ptr);
 protected:
     mt_atomic_t _ref_count;
